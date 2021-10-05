import math
def main():
    print("A quadratic equation is expressed in the form of ax^2+bx+c, where a, b and c are constants")
    print("Enter the values of a, b and c")
    a= float(input())
    b= float(input())
    c= float(input())
    D=(b*b-4*a*c)                                   #discriminant of the quadratic equation
    if(D<0):
        print("No real roots exists")               #discriminant is a complex number
    elif(D==0):
        print(-b/(2*a))                             #have only one root
    else:
        print((-b+math.sqrt(D))/(2*a), (-b-math.sqrt(D))/(2*a))     #equation has distinct roots


main()
