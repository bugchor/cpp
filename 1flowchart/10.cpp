//to check no is prime or not using while loop
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int i;
    //cout<<a<<endl;
    //return 0;
    //while (i<a)
    for(i=2;i<a;i++)
    {
        if (a%i==0)
        {
           cout<<"not prime"<<endl; 
           return 0;
        }
    
    }
    cout<<"prime"<<endl;
  
    return 0;
    
}