// vowel or consonent
#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter the alphabet"<<endl;
    cin>>a;
    switch (a)
    {
    case 'a':
        cout<<"vowel"<<endl;
        break;
    case 'e':
        cout<<"vowel"<<endl;
        break;
    case 'i':
        cout<<"vowel"<<endl;
        break;
    case 'o':
        cout<<"vowel"<<endl;
        break;
    case 'u':
        cout<<"vowel"<<endl;
        break;
    
    default:
        cout<<"consonent"<<endl;
        break;
    }
    return 0;

}