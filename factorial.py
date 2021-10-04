def recur_factorial(n):
    """Function to return the factorial
    of a number using recursion"""
    if n == 1:
        return n
    else:
        return n*recur_factorial(n-1)

num=int(input("Enter the number: "))

print("factorial of ",num," (recursive): ",end="")
print(recur_factorial(num))