line = input().split()
sett = list(set(line))

for i in sett :
  print(i, '=' , line.count(i))