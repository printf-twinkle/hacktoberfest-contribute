def binarySearch(a, l, r, s):

    if r >= l:
        mid = l + (r - l) // 2
        if a[mid] == s:
            return mid
        elif a[mid] > s:
            return binarySearch(a, l, mid-1, s)
        else:
            return binarySearch(a, mid + 1, r, s)
    else:
        return -1


n = int(input("Enter number of elements : "))
a = list(map(int, input("\nEnter the numbers : ").strip().split()))[:n]
s = int(input("Enter the number to be found : "))

result = binarySearch(a, 0, len(a)-1, s)
if result != -1:
    print("Element is present at index % d" % result)
else:
    print("Element is not present")
