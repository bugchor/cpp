// maximum of three no 
#include<iostream>
using namespace std;
void max_of(int a,int b,int c)
{
    if(a>b && a>c)
    {
        int max= a;
        cout<<"max"<<"="<<max<<endl;
    }
    else if(b>a && b>c)
    {
         int max= b;
        cout<<"max"<<"="<<max<<endl;

    }
    else{
         int max= c;
        cout<<"max"<<"="<<max<<endl;
    }
    return ;
}
int main()
{
    int p,w,q;
    cin>>p>>w>>q;
   max_of(p,w,q);
    
    return 0;

}