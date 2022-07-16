// print no less then 11
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(i==11)
        {
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}