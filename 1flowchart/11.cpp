//prime no using foor loop
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for (int i = 2; i < a; i++)
    {
        if (a%i==0)
        {
            cout<<"not prime"<<endl;
            return 0;
        }
    
    }
    cout<<"prime"<<endl;
    return 0;
}