// fabonacci seris with starting term 0 and 1 
#include<iostream>
using namespace std;
void fab(int n)
{
    int a=0,b=1,s;
    
    for (int i = 1; i <=n; i++)
    {
        cout<<a<<" ";
        s=a+b;
        a=b;
        b=s;
    }
    return;
    
}
int main()
{
    int r;
    cin>>r;
    fab(r);
    return 0;

    
}