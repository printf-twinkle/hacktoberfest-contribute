// C# code to check whether
// a matrix is orthogonal or not
using System;
 
class GFG
{
     
    //static int MAX =100;
    static bool isOrthogonal(int [,]a,
                             int m,
                             int n)
    {
        if (m != n)
            return false;
         
        // Find transpose
        int [,]trans = new int[n, n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                trans[i, j] = a[j, i];
         
        // Find product of a[][]
        // and its transpose
        int [,]prod = new int[n, n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
         
                int sum = 0;
                for (int k = 0; k < n; k++)
                {
                    // Since we are multiplying
                    // transpose of itself. We use
                    sum = sum + (a[i, k] * a[j, k]);
                }
             
                prod[i, j] = sum;
            }
        }
         
        // Check if product is
        // identity matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && prod[i, j] != 0)
                    return false;
                if (i == j && prod[i, j] != 1)
                    return false;
            }
        }
         
        return true;
    }
     
    // Driver code
    static public void Main ()
    {
        int [,]a = {{1, 0, 0},
                    {0, 1, 0},
                    {0, 0, 1}};
        if (isOrthogonal(a, 3, 3))
            Console.WriteLine("Yes");
        else
            Console.WriteLine("No");
    }
}
 
// This code is contributed by sourav
