// prime no using do while looop
#include<iostream>
using namespace std;
int main(){
    int a,i=2;
    cin>>a;
    do{
        if(a%i==0){

        
        cout<<"not prime"<<endl;
        return 0;
        }
        i++;
    }
    while(i<a);
    cout<<"prime"<<endl;
    return 0;
}
//not sucessfull;