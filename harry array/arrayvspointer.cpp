#include<iostream>
using namespace std;
int main()
{
    int roll_no[4]={3,5,2,5};
    int *r= roll_no;
    //cout<<r<<endl;
    // cout<<roll_no<<endl;
    // cout<<*r<<endl;
    // cout<<*(r+1);
    int i=0;
    while (i<4)
    {
        cout<<*(r+i)<<endl;
        i++;
    }
    
 
return 0;
}   