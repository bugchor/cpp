// functionn for pascal triangle
#include<iostream>
using namespace std;
int fact(int a)
{
    int fac=1;
    for (int i = 2; i<=a; i++)
    {
        fac*=i;
    }
    return fac;
    
}

int main()
{ 
    int a;
    cin>>a;
    for (int i = 0; i <a; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            int ans= fact(i)/(fact(j)*fact(i-j));
            cout<<ans<<" ";
           
        }
        cout<<endl;
        
    }
    return 0;
    

}