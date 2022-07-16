// half piramid
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    /*for (int i = 1; i <=a; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }*/
    int i=1;
    while (i<=a)
    {
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;

    
    
}