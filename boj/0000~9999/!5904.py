#Moo 게임
SSS
def S(x):
    if x == 0:
        return "moo"
    else:
        return S(x-1) + "m" + "o"*(x+2) + S(x-1)
N = int(input())
lst = list(S(10))
print(lst[N-1])