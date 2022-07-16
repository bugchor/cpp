//sum of its digit
#include<iostream>
using namespace std;
int main(){
    int a,s=0;//r means sum
    cin>>a;
    while (a!=0)//or while(a>0)
    {
            int l=a%10;//gives remimder as last digit
            s+=l;// sum the no 
            a=a/10;//gives qusent means removing last digit
    }
    cout<<s<<endl;
    return 0;
}
