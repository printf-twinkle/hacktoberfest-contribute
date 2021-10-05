s = list(input().split())
if len(s)==0:
	print("!!Blank Input!!")
else:
	wlist = {}
	for i in s:
		if wlist.get(i)==None:
			wlist[i]=1
		else:
			wlist[i]+=1
	for i in wlist:
		print(i,'=',wlist[i])
print()