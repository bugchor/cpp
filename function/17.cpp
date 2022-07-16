// reverse a no 
#include<iostream>
using namespace std;
void rever(int a)
{
    int rev=0;
    while (a>0)
    {
        int l=a%10;
       rev= rev*10+l;
        a=a/10;
    }
    cout<<rev<<endl;
    return;
    
}
int main()
{
    int r;
    cin>>r;
    rever(r);
    return 0;     
}