//comparision of two numbers
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter three number:"<<endl;
    cin>>a>>b;
    if(a==b)
        {
            cout<<"a is equal to b"<<endl;
        }
    else if(a<b)
        {
            cout<<"b is grater then a"<<endl;
        }
    else
        {
            cout<<"a is greater then b"<<endl;
        }
    return 0;
}
