//all prime no between two no 
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter"<<endl;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        int c;
        for(c=2;c<i;c++)
        {
            if(i%c==0)
            {
                break;
            }
        }
        if (c==i)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}