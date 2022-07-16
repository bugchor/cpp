// checking a no is amstrong or not 
#include <iostream>
#include<cmath>
using namespace std;
void amst(int a)
{
    int s=0;
    int no = a;
    while (a>0)
    {
        int l= a%10;
        s+=pow(l,3);
        a/=10;
    }
    if(no==s)
    cout<<"amstrong";
    else
    cout<<"non amstrong";
return;
    
}

int main()
{
    int r;
    cin>>r;
   amst(r);
    return 0; 
}