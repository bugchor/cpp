//vowels and consonent
#include<iostream>
using namespace std;
int main(){
    char a;
    int lowercase,uppercase;
    cout<<"enter the character"<<endl;
    cin>>a;

lowercase=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
uppercase=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');

if(lowercase||uppercase)
    {
        cout<<"vowel"<<endl;
    }
else
    cout<<"consonent"<<endl;

    return 0;
}