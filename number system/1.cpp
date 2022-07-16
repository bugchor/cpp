// check a number is prime or not 
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    bool r=1;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            r=0;
            break;
        }
    }
    if(r==1)
    {
        cout<<"prime";
    
    }
    else
    {
        cout<<"non prime";
    }
    return 0;
}