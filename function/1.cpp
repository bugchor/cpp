// function to add two no 
#include<iostream>
using namespace std;
int add(int no1,int no2)
{
    int sum=no1+no2;
    return sum;
}

int main()
{
int a,b;
cin>>a>>b;
cout<<add(a,b)<<endl;
return 0;
}