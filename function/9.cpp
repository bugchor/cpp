//factorial of no 
#include <iostream>
using namespace std;
int fact(int a)
{
    int fac=1;
    int i=1;
    while(i<=a)
    {
        fac*=i;
        i++;
    }

    return fac;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;

}