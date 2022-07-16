// print all digits of no 
#include <iostream>
using namespace std;
void digi(int a)
{

    while(a>0)

    {
        int l= a%10;
        cout<<l<<endl;
        a/=10;
          }
    return;
    
}
int main()
{
    int r;
    cin>>r;
  digi(r);
    return 0;
}