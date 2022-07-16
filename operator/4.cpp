//divisible by 3 and 2
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a%2==0 && a%3==0)
    {
        cout<<"divisible by both"<<endl;
    }
    else if (a%2==0)
    {
        cout<<"divisible by 2"<<endl;
    }
    else if (a%3==0)
    {
        cout<<"divisible by 3"<<endl;
    }
    else 
    cout<<"not divisible by 2 and 3"<<endl;

    return 0;
}