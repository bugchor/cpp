//rectangle
#include <iostream>                         
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    /*int i=1;
    
    while (i<=r)
    {   
        int j=1;
        while (j<=c)
        {
            cout<<"*";
            j++;
        }
      
        cout<<endl;
          i++;
        
    }*/

    for ( int i = 1; i <=r; i++)
    {
        for (int j = 1; j <=c; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
    
}