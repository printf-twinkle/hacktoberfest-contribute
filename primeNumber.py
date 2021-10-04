'''
* Program to check whether a number is prime or not
* Author: Sayak Karar
* Date: 4th October 2021
'''

n = int(input().strip())
ans=True
for i in range(2, n):
  if n%i==0:
    ans=False
if ans==True:
  print("Prime Number")
else:
  print("Not Prime Number")
