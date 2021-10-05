#include <bits/stdc++.h>
using namespace std;
 
void print_each_digit(int x)
{
    if(x >= 10)
       print_each_digit(x / 10);

    int digit = x % 10;

    std::cout << digit << '\n';
}
 
int main(void)
{
    long long n;
    cout << "Enter the integer" << endl;
    cin >> n;
    print_each_digit(n);
    return 0;
}
 
