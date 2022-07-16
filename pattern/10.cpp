//floyd's triangle
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int r=1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<r<<" ";
            r++;
        }
        cout<<endl;
    }
    return 0;
}