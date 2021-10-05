// C# program program to merge two
// sorted arrays with O(1) extra space.
using System;
 
// Java program program to merge two
// sorted arrays with O(1) extra space.
 
 
public class Test
{
    static int []arr1 = new int[]{1, 5, 9, 10, 15, 20};
    static int []arr2 = new int[]{2, 3, 8, 13};
     
    static void merge(int m, int n)
    {
        // Iterate through all elements of ar2[] starting from
        // the last element
        for (int i=n-1; i>=0; i--)
        {
            /* Find the smallest element greater than ar2[i]. Move all
            elements one position ahead till the smallest greater
            element is not found */
            int j, last = arr1[m-1];
            for (j=m-2; j >= 0 && arr1[j] > arr2[i]; j--)
                arr1[j+1] = arr1[j];
     
            // If there was a greater element
            if (j != m-2 || last > arr2[i])
            {
                arr1[j+1] = arr2[i];
                arr2[i] = last;
            }
        }
    }
     
    // Driver method to test the above function
    public static void Main()
    {
        merge(arr1.Length,arr2.Length);
        Console.Write("After Merging \nFirst Array: ");
        for(int i =0; i< arr1.Length;i++){
            Console.Write(arr1[i]+" ");
        }
        Console.Write("\nSecond Array: ");
        for(int i =0; i< arr2.Length;i++){
            Console.Write(arr2[i]+" ");
        }
    }
}
 
/*This code is contributed by Sourav_das*/
