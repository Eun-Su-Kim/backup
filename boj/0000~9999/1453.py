#피시방 알바
N = int(input())
a = list(map(int,input().split()))
dic = {}
for i in a:
    if i in dic:
        dic[i] += 1
    else:
        dic[i] = 0
cnt = 0
for j in dic.items():
    if j[1] != 0:
        cnt += j[1]
print(cnt)