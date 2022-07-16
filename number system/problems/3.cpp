//factorial of a number 
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int f=1;
    for (int i = 1;i <=a; i++)
    {
        f*=i;
    }
    cout<<f<<endl;
    return 0;
}