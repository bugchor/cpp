//max min using function 
#include <iostream>
using namespace std;
int max_no(int a, int b, int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c)
    {
        return b;
    }
    else if(c>a && c>b)
    {
        return c;
    }
}

int min_no(int a, int b, int c)
{
    if(a<b && a<c)
    {
        return a;
    }
    else if(b<a && b<c)
    {
        return b;
    }
    else if(c<a && c<b)
    {
        return c;
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"max of three no is "<<max_no(a,b,c)<<endl;
    cout<<"min of three no is "<<min_no(a,b,c)<<endl;

    return 0;
}