#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int s=0;
    int p=1;
   //bool r=1;
while(a!=0)
    {
        int digit=a%10;
        s+=digit;
        p*=digit;

        a=a/10;

      

       
    }
    cout<<p-s<<endl;
    return 0;
}