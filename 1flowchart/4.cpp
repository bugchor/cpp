//faranheit to celcius
#include <iostream>
using namespace std;
int main(){
    float c,f;
    cout<<"enter the temprature in farenheit"<<endl;
    cin>>f;
    c =(f-32)* 5/9;
    cout<<"temp after conversion in celsius "<<c<<endl;
    return 0;
}