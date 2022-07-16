//type of triangle
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the side of triangle"<<endl;
    cin>>a>>b>>c;

if(a==b && b==c)
    {
        cout<<"equilateral"<<endl;
    }
else if(a==b || b==c || c==a)
    {
        cout<<"icosceles"<<endl;
    }
else
    {
        cout<<"scalene"<<endl;
    }
return 0;
}