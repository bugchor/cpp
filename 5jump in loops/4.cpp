// prime or not 
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter"<<endl;
    cin>>a;
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            cout<<a<<" is not prime"<<endl;
            break;
        }
    }
    if(i==a)
    {
        cout<<a<<" is prime"<<endl;
    }
    return 0;
}