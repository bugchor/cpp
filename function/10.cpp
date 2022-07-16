// if a no is prime or not 
#include<iostream>
#include<cmath>
using namespace std;
void isprime(int a)
{
    // int i=2;
    // while(i<sqrt(a))
    // {
    //     if(a%i==0)
    //     {
    //         cout<<"not prime"<<endl;
    //      return;
    //     }
    //     i++;

    // }
    for (int i = 2; i <a; i++)
    {
        if (a%i==0)
        {
            cout<<"not prime";
            return;
        }
        
    }
    
    cout<<"prime"<<endl;
    return;
    
}
int main()
{
    int x;
    cin>>x;
    isprime(x);
    return 0;

}