import java.util.*;
class boundary
{
    public static void main(String args[])
    {
        int i=0,j=0,s=0,s1=0,x=0,y=0;
        Scanner SC=new Scanner(System.in);
        System.out.println("Enter the no.of rows:");
        int M=SC.nextInt();
        System.out.println("Enter the no.of columns:");
        int N=SC.nextInt();
        if(M<=2||N>=9)
        {
            System.out.println("out of range:");
            return;
        }
        int a[][]=new int[M][N];
        int b[][]=new int[M][N];
        int t[]=new int[M*N];
        System.out.println("Enter elements of matrix:");
        for(i=0;i<M;i++)
        {
            for( j=0;j<N;j++)
            {
                a[i][j]=SC.nextInt();
            }
        }
        System.out.println("the original matrix:");
        for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++)
            {
                System.out.print(a[i][j]+"\t");
            }
            System.out.println();
        }
        for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++)
            {
                if(i==0||j==0||i==M-1||j==N-1)
            s=s+a[i][j];
        }
    }
        System.out.println("sum of boundary elements(unsorted):"+s);
        for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++)
            {
                t[x++]=a[i][j];
            }
        }
        for(i=0;i<x-1;i++)
        {
            for(j=0;j<x-i-1;j++)
            {
                if(t[j]<t[j+1])
                {
                    int temp=t[j];
                    t[j]=t[j+1];
                    t[j+1]=temp;
                }
            }
        }
        for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++)
            {
                b[i][j]=t[y++];
            }
        }
        System.out.println("the sorted matrix:");
        for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++)
            {
                System.out.print(b[i][j]+"\t");
            }
            System.out.println();
        }
        for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++)
            {
        if(i==0||j==0||i==M-1||j==N-1)
        {
            s1=s1+b[i][j];
        }
    }
}
        System.out.println("sum of boundary elements(sorted):"+s1);
    }
}



        
            
