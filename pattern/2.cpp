//hollow rectangle
#include<iostream>
using namespace std;
int main(){
    int c,r;
    cin>>r>>c;
    int i=1;
    while (i<=r)
    {
        int j=1;
        while (j<=c)
        {
            if (i==1||i==r||j==1||j==c)
            {
                cout<<"*";
            }
            else
            cout<<" ";
            j++;
            
        }
        cout<<endl;
        i++;
        
    } 
    /*for (int i= 1; i<=r;i++)
    {
        for (int j= 1;j<=c;j++)
        {
            if (i==1||i==r||j==1||j==c)
            {
                cout<<"*";
            }
            else
            cout<<" ";
            
        }
        cout<<endl;
        
    }*/
    
    return 0;
    
}