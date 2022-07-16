//function for find ncr
#include<iostream>
using namespace std;
int vca(int a)
{
    int afac=1;
    for (int i = 1; i <=a; i++)
    {
        afac*=i;
    }
    return afac;
    
}

int main()
{
    int n,r;
    cin>>n>>r;
    int ans= vca(n)/(vca(r)*vca(n-r));
    cout<<ans<<endl;
    return 0;
}