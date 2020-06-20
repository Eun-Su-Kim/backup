def fn(x, y):
    #f(x, y) = (1/20) * x ** 2 + y ** 2
    return x ** 2 / 20 + y ** 2

print(fn(3, 4))

def fn_derivative(x, y):
    # derivative : 도함수(미분)
    return x / 10, 2 * y

print(fn_derivative(3, 4))