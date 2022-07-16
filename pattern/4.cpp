//inverted pyramid
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    /*for (int i = a; i >=1; i--)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }*/
    int i=a;
    while (i>=1)
    {
        int j=1;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }
    
    return 0;
}