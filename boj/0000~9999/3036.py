#링
import math
N = int(input())
a = list(map(int,input().split()))
k = a.pop(0)
for i in a:
    gcd = math.gcd(k, i)
    print(str(k//gcd)+"/"+str(i//gcd))