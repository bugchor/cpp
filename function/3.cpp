// function for finding simple intrest
#include<iostream>
using namespace std;
int simple_intreat(int p,int r,int t)
{
    int intrest = (p*r*t)/100;
    return intrest;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<simple_intreat(a,b,c)<<endl;
    return 0;
    
}