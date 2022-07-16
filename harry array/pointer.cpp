#include <iostream>
using namespace std;
int main()
{
    int a=1;
    int *b=&a;
    cout<<"address of a"<<&a<<endl;
    cout<<"address of a"<<b<<endl;
    cout<<"value of a"<<*b<<endl;
    return 0;
}