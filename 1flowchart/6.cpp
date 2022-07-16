//largest among three no
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three no"<<endl;
    cin>>a>>b>>c;


    if(a>b)
    {
        if(a>c)
            cout<<"a is the largest"<<endl;
        else
            cout<<"c is the largest"<<endl;
    }
    else
    {
        if(b>c)
            cout<<"b is the largest"<<endl;
        else
            cout<<"c is the largest"<<endl;

    }
    return 0;
}