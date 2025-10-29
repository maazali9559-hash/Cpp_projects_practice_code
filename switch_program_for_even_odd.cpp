#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Your Number :"<<endl;
    cin>>n;
    switch (n%2)
    {
    case 0:
        cout<<"EVEN"<<endl;
        break;
    case 1:
        cout<<"ODD"<<endl;
        break;

    
    default:
        cout<<"INVALID NUMBER"<<endl;
        break;
    }
    return 0;
}