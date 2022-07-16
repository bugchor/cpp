//sum of n number whit do while
#include<iostream>
using namespace std;
int main(){
    int a,s=0,i=1;
    cin>>a;
    do{
        s+=i;
        i++;
    }
    while(i<=a);

    cout<<s<<endl;
    return 0;
}