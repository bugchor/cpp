//all no til n except divisible by three
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
return 0;
}