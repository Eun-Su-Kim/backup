#Æç¸°µå·ÒÀÎÁö È®ÀÎÇÏ±â
t = input()
a = len(t) - 1
ss = 0
for i in range(len(t)):
  if (i > a) :
    break
  if (t[i] == t[a]) :
    a -= 1
  else :
    ss += 1
if (ss > 0) :
  print(0)
else :
  print(1)
