// even or odd
#include<iostream>
using namespace std;
void even_odd(int a)
{
    if (a%2==0)
    {
        cout<<"even"<<endl;
    }
    
    else
        cout<<"odd"<<endl;
}

int main()
{
    int r;
    cin>>r;
    even_odd(r);
    return 0;
}