#include <iostream>
using namespace std;
 
int main()
{
    int num;
    
    cout<<"Enter a number \n";
    cin >> num;
    
    //copy the 'num' to 'temp' and initialize 'rev' with 0
    int temp=num, rev=0;
    
    //while loop to revesere the 'num'
    while(temp>0){
        rev = rev*10 + temp%10;
        temp = temp/10;
    }
    
    if(rev == num)
        cout << "Palindrome number \n";
    else
        cout << "Not a Palindrome number \n";
    
    return 0;
}
