def factorial(x):
    if x==1:
        return 1
    return x*factorial(x-1)
n=int(input("Enter number:"))
y= factorial(n)
print (y)
