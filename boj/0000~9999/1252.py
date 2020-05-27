#이진수 덧셈
bia, bib = map(int,input().split())
ba = "0b" + str(bia)
bb = "0b" + str(bib)
a = int(ba, 2)
b = int(bb, 2)
c = a + b
print(bin(c)[2:])