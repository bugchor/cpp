// function to convert f into c 
#include<iostream>
using namespace std;
float f_c(float r)
{
    float conv= (r-32)*5/9;
    return conv;
}
int main() 
{
    float f;
    cin>>f;
    cout<<f_c(f)<<endl;
}