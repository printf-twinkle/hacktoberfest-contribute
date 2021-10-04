#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,bag=0;
        cin>>a>>b>>c>>d;
        if(a+b+c<=d){
            bag++ ;
            cout<< bag << endl ;
        }
        else if(c+b<=d){
            bag = 2 ;
            cout<< bag << endl ;
        }
        else{
            bag++ ;
            if(a+b<=d){
                bag++ ;
                cout<< bag << endl ;
            }
            else{
                bag+=2 ;
                cout<< bag << endl ;
            }
            
        }
        
    }   
}
