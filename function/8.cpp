// find sum of n natural no 
#include<iostream>
using namespace std;
int sum_natural(int n)
{

    int s=0;
    for( int i=1;i<=n;i++)
    {
        s+=i;

    }

    return s;
}
int main()
{
        int a;
        cin>>a;
        cout<<sum_natural(a)<<endl;
        return 0;


}