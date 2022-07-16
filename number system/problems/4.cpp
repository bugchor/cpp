// check vowel or consonent 
#include<iostream>
using namespace std;
int main() 
{
    char a;
    cin>>a;
    int c=(a=='A'||a=='E'||a=='O'||a=='I'||a=='U');
    int b=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
   
    if(c||b )
    {
        cout<<"vowel";
    }
   
    else
    cout<<"consonent";
    return 0;
}