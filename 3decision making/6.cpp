//max of three no
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three number"<<endl;
    cin>>a>>b>>c;

int max;

if(a>b)
    {
        if(a>c)
            {
                max=a;
            }
        else
            {
                max=c;
            }
    }
else 
    {
        if(b>c)
            {
                max=b;
            }
        else
            {
                max=c;
            }

    cout<<"Max="<<max<<endl;
    return 0;
    }
{
    /* code */
}

}