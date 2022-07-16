// reverse a number 
#include<iostream>
using namespace std;
int main()
{
    int a;
    int s=0;
    cin>>a;
while (a!=0)
{
    int l= a%10;
    s=(s*10)+l;
    a=a/10;
}
cout<<s<<endl;
return 0;

    
}