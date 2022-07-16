// voting system using function 
#include<iostream>
using namespace std;
bool vote(int a)
{
    if (a>=18)
    {
        return true;
    }
    else
    return false;
    
}

int main(){
    int a;
    cin>>a;
    if (vote(a))
    {
     cout<<"can vote"<<endl;
    }
    else
    cout<<"cannot vote"<<endl;
    return 0;
    
}