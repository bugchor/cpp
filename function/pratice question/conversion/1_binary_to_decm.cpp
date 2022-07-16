// binary to decimal
#include<iostream>
using namespace std;
int btod(int a)
{
    int ans=0;
    int x=1;
    while(a>0)
    {
        int r=a%10;
        ans+= r*x;
        x*=2;
        a/=10;
    }
    return ans;
}
int main()
{
    int a;
    cin>>a;

    cout<<btod(a)<<endl;
    return 0;
}