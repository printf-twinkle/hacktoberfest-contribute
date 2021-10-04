def minJumps(arr, l, h):
 
    # Base case: when source and
    # destination are same
    if (h == l):
        return 0
 
    # when nothing is reachable
    # from the given source
    if (arr[l] == 0):
        return float('inf')
 
    # Traverse through all the points
    # reachable from arr[l]. Recursively
    # get the minimum number of jumps
    # needed to reach arr[h] from
    # these reachable points.
    min = float('inf')
    for i in range(l + 1, h + 1):
        if (i < l + arr[l] + 1):
            jumps = minJumps(arr, i, h)
            if (jumps != float('inf') and
                       jumps + 1 < min):
                min = jumps + 1
 
    return min
 
# Driver program to test above function
arr = [1, 3, 6, 3, 2, 3, 6, 8, 9, 5]
n = len(arr)
print('Minimum number of jumps to reach',
     'end is', minJumps(arr, 0, n-1))

Message @Aakansha Prasad
