//all prime no till n using for loop
#include<iostream>
using namespace std;
int main(){
    int a ;
    cin>>a;
   for(int i=2;i<a;i++)
    {
       if (a%i==0)
       {
            //cout<<"not prime"<<i<<endl;
            continue;
       }
       else
       {
           cout<<i<<endl;
       }
       return 0;
    }
       
   }
    