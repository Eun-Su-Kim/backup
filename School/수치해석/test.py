'''
신경망 학습 목적: 손실 함수의 값을 가능한 낮추는 파라미터를 찾는 것
파라미터 (parameter):
    - 파라미터 : 가중치(weight), 편향(bias)
    - 하이퍼 파라미터(hyper parameter): 학습률, epoch, batch 크기,
        신경망 층에서의 뉴런 개수, 신경망 은닉층 개수
ch06 의 목표:
    - 파라미터를 갱신하는 방법들: SGD, Sgd, AdaGrad, Adam
    - 하이퍼 파라미터를 최적화 시키는 방법
SGD : Stochastic Gradient Descent (확률적 경사 하강법)
'''
import numpy as np
import matplotlib.pyplot as plt

def fn(x, y):
    '''
    f(x, y) = (1/20) * x ** 2 + y ** 2
    '''

    return x ** 2 / 20 + y ** 2


def fn_derivative(x, y):
    # derivative : 도함수(미분)
    ''' 편미분 df/dx, df/dy 를 리턴하는 함수 '''
    return x / 10, 2 * y

class Sgd:
    '''
    SGD: Stochastic Gradient Descent (확률적 경사 하강법)
    W = W - lr * dL/dW
    W: 파라미터(가중치, 편향)
    lr: 학습률(learning rate)
    dL/dW: 변화율(gradient)
    '''

    def __init__(self, learning_rate = .01):
        self.learning_rate = learning_rate

    def update(self, params, gradients):
        '''
        파라미터 params 와 변화율 gradients 가 주어지면,
        파라미터들을 갱신하는 메소드
        W = W - lr * dL/dW : 공식으로 갱신
        :param params: dict()
        :param gradients: dict()
        :return:
        '''

        for key in params:
            # W = W - lr * dL/dW
            params[key] -= self.learning_rate * gradients[key]

if __name__ == '__main__':
    # Sgd 클래스의 객체(인스턴스)를 생성
    sgd = Sgd(learning_rate = .95)

    # ex01 모듈에서 작성한 fn(x, y) 함수의 최솟값을 임의의 점에서 시작해서 찾아감.
    init_position = (5, -2)

    # 신경망에서 찾고자 하는 파라미터의 초깃값
    params = dict()
    params['x'], params['y'] = init_position[0], init_position[1]

    # 각 파라미터에 대한 변화율(gradient)
    gradients = dict()
    gradients['x'], gradients['y'] = 0, 0

    # 각 파라미터들(x, y)을 갱신할 때마다 갱신된 값을 저장할 리스트
    x_history = []
    y_history = []
    for i in range(70):
        x_history.append(params['x'])
        y_history.append(params['y'])
        gradients['x'], gradients['y'] = fn_derivative(params['x'], params['y'])
        sgd.update(params, gradients)

    for x, y in zip(x_history, y_history):
        print(f'({x}, {y})')
    # f(x,y) 함수를 등고선으로 표현
    x = np.linspace(-10, 10, 100)
    y = np.linspace(-5, 5, 500)
    X, Y = np.meshgrid(x, y)
    Z = fn(X, Y)

    mask = Z > 7
    Z[mask] = 0

    plt.contour(X, Y, Z, 10)
    plt.xlabel('x')
    plt.ylabel('y')
    plt.axis('equal')

    # 등고선 그래프에 파라미터(x, y)들이 갱신되는 과정을 추가
    plt.plot(x_history, y_history, 'o-', color = 'r')
    plt.show()
    