class PalindromeNo {
    public boolean isPalindrome(int x) {
        int rem=0, sum = 0;
        int temp = x;
        if(temp<0)
            return false;
        while(x!=0){
            rem = x%10;
            x = x/10;
            sum = (sum*10) + rem;
        }
        if (sum == temp){
            return true;
        }
        else
            return false;
    }

    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        System.out.println("enter input");
        int num = input.nextInt();
        Solution S = new Solution();
        S.isPalindrome(num);
        
    }
}