// printing all digits of a positive decimal number from right to left 
#include<iostream>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    while(a>0)
    {
        int l=a%10;
        cout<<l<<endl;
        a=a/10;
    }
    return 0;
}