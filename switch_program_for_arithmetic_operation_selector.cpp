#include<iostream>
using namespace std;
int main(){
    int n, m ;
    cout<<"Enter your numbers :"<<endl;
    cin>>n>>m;
    char opt;
    cout<<"CHOOSE : "<<endl;
    cout<<"1. +"<<endl;
    cout<<"2. -"<<endl;
    cout<<"3. *"<<endl;
    cout<<"4. /"<<endl;
    cin>>opt;
    switch (opt)
    {
    case '+':
        cout<<"Addition = "<<n+m<<endl;
        break;
    case '-':
        cout<<"Subtraction = "<<n-m<<endl;
        break;
    case '*':
        cout<<"Multipication = "<<n*m<<endl;
        break;
    case '/':
        cout<<"Division = "<<n/m<<endl;
        break;
    default:
        cout<<"Invalid Operator"<<endl;
        break;
    }
    return 0;
}