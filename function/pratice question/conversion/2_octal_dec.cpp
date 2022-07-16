// octal to decimal
#include<iostream>
using namespace std;
int otod(int a)
{
    int ans=0;
    int x=1; // power of 
    while (a>0)
    { 
        int r= a%10;
        ans+= r*x;
        x*=8;
        a/=10;


    }
    return ans;
}

int main()
{
    int a;
    cin>>a;
    cout<<otod(a)<<endl;
    return 0;
}