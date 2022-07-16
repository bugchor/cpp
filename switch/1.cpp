//simple calculator
#include<iostream>
using namespace std;
int main(){
    int b, a;
        int r;
    cout<<"enter two no";
    cin>>a>>b;
    cout<<"please select option\n1- +\n2- -\n3- *\n4- /\n5- reminder"<<endl;
    cin>>r;
    switch (r)
    {
    case 1:
        cout<<a+b<<endl;
        break;
    case 2:
        cout<<a-b<<endl;
        break;
    case 3:
        cout<<a*b<<endl;
        break;
    case 4:
        cout<<a/b<<endl;
        break;
    case 5:
        cout<<a%b<<endl;
        break;
           
    default:
        cout<<"choose correct option"<<endl;
        break;
    }
    return 0;
}