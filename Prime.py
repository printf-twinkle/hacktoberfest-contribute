number=int(input())     # Taking input as an integer
flag=0                  # Flag variable 
for i in (0,int(number/2)):    # checking if the number is divisible 
        if(number%i==0):
                print("Prime number")
                flag=1
                break
if(flag=0):
        print("Not a prime number")
