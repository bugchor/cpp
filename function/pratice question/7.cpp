//check pythagorian triplet
#include<iostream>
using namespace std;
bool check(int a,int b,int c){
    int x= max(a,max(b,c));
    int y,z;
    if(x==a)
    {
        y=b;
        z=c;
    }
    if(x==b)
    {
        y=a;
        z=c; 
    }
    if(x==c)
    {
        y=a;
        z=b;
    }
    if(x*x==y*y+z*z)
    {
        return true;
    }
    else 
        return false;
}





int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(check(a,b,c))
    {
        cout<<"yes py triplet"<<endl;
    }
    else
        cout<<"no not py triplet"<<endl;

    
return 0;


}