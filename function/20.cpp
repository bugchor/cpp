// function to check vowels or consonent 
#include<iostream>
using namespace std;
bool is_vowel(char a)
{
    char vowel=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
    char vwel=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
    if (vowel || vwel)
    {
        return true;
    }
    return false;
    
}

int main()
{
    char r;
    cin>>r;
    if (is_vowel(r))
    {
        cout<<"vowel"<<endl;
    }
    else
    cout<<"consonent"<<endl;
    return 0;
    
}