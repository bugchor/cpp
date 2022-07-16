// amstrong no  means cube sum of its digit is equal to no 
#include<iostream>
#include<cmath>
int main(){
    int a,s=0;
    std::cin>>a;
    int inputno=a;
    while (a>0)
    {
        int l=a%10;
        s+=pow(l,3);
        a=a/10;
    }
    if(inputno==s)
    {
        std::cout<<"amstrong";
    }
    else
    std::cout<<"non amstrong";
}