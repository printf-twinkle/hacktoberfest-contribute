number=int(input("Enter a number: "))
flag=1
for i in range (0,int(number/2)):
  if(number%i==0):
    print("Not a prime number")
    break
    flag=0
if(f=1):
  print("Prime number")
