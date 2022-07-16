// fabonic seris 0 and 1

#include<iostream>
using namespace std;
void fab(int l)
{
     int a=0,b=1,s=0;
        
    for (int i = 0; i <=l; i++)
    {
        cout<<a<<" ";
        s=a+b;
        
        a=b;
        b=s;
    }
    
    return;
    
}
int main()
{
    int a;
    cin>>a;
    fab(a);
    return 0;
}