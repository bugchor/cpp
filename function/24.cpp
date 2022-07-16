//function for finding factorial 
#include <iostream>
using namespace std;
void fact(int a)
{
    int f=1;
    for (int i = 1; i <=a; i++)
    {
        f*=i;
    }
    cout<<f<<endl;
}

int main()
{
    int r;
    cin>>r;
    fact(r);
    return 0;
}