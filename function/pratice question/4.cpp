// swap two integers
#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp =a;
    a=b;
    b= temp;
    cout<<"value of first no after swap  "<<a<<endl<<"value of second no after swap  "<<b<<endl;
    return;
}

int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    return 0;
}