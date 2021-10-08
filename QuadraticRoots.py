import math

# Solver
def solve(a, b, c):
    d = b * b - 4 * a * c
    d = complex(0, math.sqrt(-d)) if d < 0 else math.sqrt(d)
    return ((-b - d) / (2 * a), (-b + d) / (2 * a))

# Driver
a = int(input("Enter a:\n"))
b = int(input("Enter b:\n"))
c = int(input("Enter c:\n"))

solns = solve(a, b, c)
print("The solutions are: ", end = '')
print(solns)
