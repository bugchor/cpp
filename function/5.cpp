//check if a no is odd or even using function 
#include<iostream>
using namespace std;
void odd_even(int a)
{
    
    if(a%2==0)
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
    }
    return;

    
}
int main() 
{
    int n;
    cin>>n;
    odd_even(n);
    //cout<<odd_even(n)<<endl;

}