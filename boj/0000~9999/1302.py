#베스트셀러
n = int(input())
dic = {}
for i in range(n):
    bname = input()
    if bname in dic:
        dic[bname] += 1
    else:
        dic[bname] = 1
maxnum = 0
for j in dic.values():
    maxnum = max(j, maxnum)
lst = []
for k in dic.items():
    if maxnum == k[1]:
        lst.append(k[0])
lst.sort()
print(lst[0])