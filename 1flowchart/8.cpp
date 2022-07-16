//sum of n natural with for loop
#include <iostream>
using namespace std;
int main(){
    int a,s=0;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        s+=i;
    }
    cout<<s<<endl;
    return 0;
}