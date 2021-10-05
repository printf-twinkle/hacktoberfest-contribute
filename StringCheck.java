 Contributor Info : 
//     Name : Ankit Raj
//     Git : https://github.com/Ankit-5087

import java.util.*;
class String2
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner (System.in);
        System.out.println("PLease enter a sentence");
        String str=sc.nextLine();
        int l=str.length();
        int nou=0,nol=0,now=0;
        for(int i=0;i<l;i++)
        {
            char ch=str.charAt(i);
            if(Character.isUpperCase(ch))
            nou++;
            if(Character.isLowerCase(ch))
            nol++;
            if(ch==' ')
            now++;
        }
        now=now+1;
        System.out.println("No. of characters="+l);
        System.out.println("No. of uppercase="+nou);
        System.out.println("No. of lowercase="+nol);
        System.out.println("No. of words="+now);
    }
}
