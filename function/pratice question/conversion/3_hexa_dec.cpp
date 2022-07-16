// hexadecimal to decimal
#include<iostream>
using namespace std;
int htod(string a)
{
    int ans=0;
    int x=1;//power of 16

    while(a>0)
    {
        int l= a%10;
        ans+= l*x;
        x*=16;
        a/=10;
    }
    return ans;

}
int main()
{
    int a;
    cin>>a;
    cout<<htod(a)<<endl;
    return 0;
}
// solve when learn string 