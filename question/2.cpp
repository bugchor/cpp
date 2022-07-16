//product of its digit
#include<iostream>
using namespace std;
int main () {
    int a,p=1;
    cin>>a;
    while (a>0)
    {
        int l=a%10;
        p*=l;
        a/=10;

    }
    cout<<p<<endl;
    return 0;
    
}