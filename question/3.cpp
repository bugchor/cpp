// reverse no 

#include<iostream>
using namespace std;
int main(){
    int a,r=0;//r means reverse 
    cin>>a;
    while (a!=0)//or while(a>0)
    {
            int l=a%10;//gives remimder as last digit
            r=r*10+l;// reverse the no 
            a=a/10;//gives qusent means removing last digit
    }
    cout<<r<<endl;
    return 0;
}
