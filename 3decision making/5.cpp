//min and max of two no
/*#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two number"<<endl;
    cin>>a>>b;

if(a<b)
    {
        cout<<"maximum"<<b<<endl;
        cout<<"minimum"<<a<<endl;
    }
else
    {
        cout<<"maximum"<<a<<endl;
        cout<<"minimum"<<b<<endl;
    }
return 0;
}*/






#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
int max,min;

if(a>b)
    {
        max=a;
        min=b;
    }
else
    {
        max=b; 
        min=a;
    }

cout<<"Max= "<<max<<endl;
cout<<"Min= "<<min<<endl;

return 0;

}