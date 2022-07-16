// checking a number is amstrong or not 
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
   int s=0;
    cin>>a;
    int p=a;
    while(a!=0)
    {
        int l= a%10;
        s+=pow(l,3);
        a=a/10;
    }
    if(p==s)
    {
        cout<<"amstrong";
    }
    else
    cout<<"not amstrong";
    return 0;

}