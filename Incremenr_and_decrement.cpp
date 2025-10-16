#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    a=b=c=d=-1;
    a=++c - d--;
    b=c++ + --d;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;
    return 0;
    
}