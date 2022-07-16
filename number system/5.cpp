//fabonic series  starting from 0 1
#include <iostream>
using namespace std;
int main() 
{
    int a=0,b=1,n;
    int r;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        r=a+b;

        a=b;
        b=r;

    }
    cout<<r<<endl;
}
