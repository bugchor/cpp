// function for finding prime no between two no 
#include<iostream>
#include<cmath>
using namespace std;
    bool prime_no(int m)
    {
        for(int i=2;i<=sqrt(m);i++)
        {
            if(m%i==0)
            {
                return false;
            }

        }
        return true;
    }
int main()
{   
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(prime_no(i))
        {
            cout<<i<<endl;
        }

    }
    return 0;
}