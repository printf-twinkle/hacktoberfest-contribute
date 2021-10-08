
def minJumps(arr, n):
  
  if (n <= 1):
    return 0

  if (arr[0] == 0):
    return -1
  maxReach = arr[0] 
  step = arr[0]
  jump = 1
  
  
  for i in range(1, n):

    if (i == n-1):
      return jump
  
    maxReach = max(maxReach, i + arr[i])

    step -= 1;
  
    if (step == 0):
   
      jump += 1
     
      if(i >= maxReach):
        return -1
    
      step = maxReach - i;
  return -1
  
lst = []
n = int(input("Enter number of elements : "))

for i in range(0, n):
    ele = int(input())
 
    lst.append(ele)
     
print(lst)
size = len(arr)  
print("Minimum number of jumps to reach end is % d " % minJumps(arr, size))
