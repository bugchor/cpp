//sum of n no for and while loop
/*#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;

    int sum=0;
    for(int c=1;c<=a;c++)
    {
        sum=sum+c;
    }
    cout<<sum<<endl;
    return 0;
} */



#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;

    int sum=0;
    int i=1;
    while(i<=a)
    {
        sum=sum+i;
        i++;
        
    }
    cout<<"sum "<<sum<<endl;
    
    return 0;
}