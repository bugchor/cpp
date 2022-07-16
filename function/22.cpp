// program to print all prime no between two no 
#include<iostream>
using namespace std;
bool is_prime(int a)
{
    for (int i =2; i <a; i++)
    {
        if (a%i==0)
        {
            return false;
        }
        
    }
    
    return true;
}


int main()
{
    int r,b; 
    cin>>r>>b;
    for (int i = r; i <=b; i++)
    {
        if (is_prime(i))
        {
            cout<<i<<endl;
        }
        
    }
    return 0;
    
}