//sum of positive no
#include<iostream>
using namespace std;
int main(){
    int a;
    int sum=0;
    cout<<"enter number"<<endl;
    cin>>a;

    while(a>=0)
    {
        sum+=a;
        cout<<"enter other number"<<endl;
        cin>>a;

    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}