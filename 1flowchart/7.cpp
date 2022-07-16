//sum of n natural number using while loop
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=0;
    int i=1;
    while(i<=a)
    {
        b+=i;
        i++;
    }
    cout<<b<<endl;
    return 0;
}
