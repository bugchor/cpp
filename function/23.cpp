// function to print fabonici seris
#include<iostream>
using namespace std;
void fab(int a)
{
    int r= 0,p=1;
    int s=0;
    for (int  i = 1; i <=a; i++)
    {
        cout<<r<<" ";
        s= r+p;
        // cout<<s<<" ";
        r=p;
        p=s;
        
    }
    return;
    
}

int main()
{
    int q;
    cin>>q;
    fab(q);
    return 0;
}