#제로
K = int(input())
a = []
for i in range(K):
    num = int(input())
    if num == 0:
        del a[-1]
    else:
        a.append(num)
A = sum(a)
print(A)