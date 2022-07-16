// function for factors of no 
#include<iostream>
using namespace std;
void fact(int a)
{
    for (int i = 1; i <= a; i++)
    {
        if (a%i==0)
        {
                cout<<i<<" ";
        }
        
    }
    return;
    
}

int main()
{
    int r;
    cin>>r;
   fact(r);
    return 0;
}