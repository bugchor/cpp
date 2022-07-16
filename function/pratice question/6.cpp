// sum of n natural no using function 
#include<iostream>
using namespace std;
// int sum(int a)
// {
//     int s=0;
//     for (int i = 1; i <=a; i++)
//     {
//         s+=i;
//     }
//     return s;
// }
 int sum(int a)
 {
     int s=a*(a+1)/2; // formula for sum
     return s;
 }
int main()
{
    int a;
    cin>>a;
    cout<<sum(a)<<endl;
    return 0;

}