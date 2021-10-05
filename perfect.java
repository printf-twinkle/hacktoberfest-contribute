import java.util.*;
class perfect
{
    public static void main(String args[])
    {
        int n,s=0;
        Scanner SC=new Scanner(System.in);
        System.out.println("Enter the number:");
        n=SC.nextInt();
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
            s=s+i;
        }
        if(s==n)
        System.out.println("perfect number:");
        else
        System.out.println("not a perfect number:");
    }
}
