n = int(input())
a = []
for i in range(n+1):
    a.append(0)
a[0] = 1
a[1] = 1

b = [1, 23, 45, 67, 89]
for i in b:
    a[i] = 0
for j in range(n+1):
    if a[j] == 0:
        continue
    a[j] = a[j-1] + a[j-2]
print(a)