// checking a no is prime or not 
#include<iostream>
using namespace std;
bool prime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int r;
    cin>>r;
    if(prime(r))
    {
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}