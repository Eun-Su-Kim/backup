#듣보잡
a, b = map(int,input().split())
dic = {}
sol = []
for i in range(a+b):
    person = input()
    if person in dic:
        dic[person] += 1
    else:
        dic[person] = 1
for j in dic.keys():
    if dic[j] == 2:
        sol.append(j)
sol.sort()
print(len(sol))
for k in sol:
    print(k)