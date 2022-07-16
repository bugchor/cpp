// other way to check prime no 
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int i=2;
    for(i;i<a;i++)
    {
        if (a%i==0)
        {
            cout<<"non prime";
            return 0;
        }
        
    }
    //if(i==a) other way by adding if statment 
    //{
        cout<<"prime";
    //}
return 0;
}