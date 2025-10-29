#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter two numbers :"<<endl;
    cin>>n>>m;
    char opt;
    cout<<"Enter your operator :"<<endl;
    cin>>opt;
    switch (opt)
    {
    case '+':
        cout<<"SUM = "<<n+m<<endl;
        break;
    case'-':
        cout<<"SUB = "<<n-m<<endl;
        break;
    case'*':
        cout<<"MUL = "<<n*m<<endl;
        break;
    case'/':
        cout<<"DIV = "<<n/m<<endl;
        break;
    
    default:
        cout<<"INVALID OPT"<<endl;
        break;
    }
}