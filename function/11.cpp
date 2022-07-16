//all prime no till n
#include<iostream>
#include<cmath>
using namespace std;
void all_prime(int a)
{
    for (int i= 2; i<a; i++)
    {
        if(a%i==0)
        {
            continue;
        }
        else
        cout<<i<<endl;
    }
    return;
  
    
}
int main()
{
    int n;
    cin>>n;
   all_prime(n);
    return 0;

}