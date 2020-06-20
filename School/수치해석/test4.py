import numpy as np
import matplotlib.pyplot as plt

def fn(x, y):
    # Rosenbrock function, a = 1, b = 100
    return (1 - x) ** 2 + 100 * (y - x ** 2) ** 2

def fn_derivative(x, y):
    # derivative : 도함수(미분)
    h = 1e-7
    grad_x = (fn(x + h, y) - fn(x, y)) / h
    grad_y = (fn(x, y + h) - fn(x, y)) / h
    return grad_x, grad_y

class Sgd:
    def __init__(self, learning_rate = .01):
        self.learning_rate = learning_rate

    def update(self, params, gradients):
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
   
    x = np.linspace(-10, 10, 100)
    y = np.linspace(-10, 10, 500)
    X, Y = np.meshgrid(x, y)
    Z = fn(X, Y)

    mask = Z > 7
    Z[mask] = 0

    plt.contour(X, Y, Z, 10)
    plt.xlabel('x')
    plt.ylabel('y')
    plt.axis('equal')

    plt.plot(x_history, y_history, 'o-', color = 'r')
    plt.show()
    