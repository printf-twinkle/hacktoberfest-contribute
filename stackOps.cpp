#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    stack<int> stack;

    stack.push(25);
    stack.push(26);
    stack.push(27);
    stack.push(28);
    stack.push(29);
    cout<<stack.size()<<endl;
    cout<<stack.top()<<endl;
    stack.pop();
    cout<<stack.top()<<endl;

    return 0;
}