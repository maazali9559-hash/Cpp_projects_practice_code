#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Your Numbers :"<<endl;
    cin>>n;
    switch (n/10)
    {
    case 10:
        cout<<"GRADE A+"<<endl;
        break;
    case 9:
        cout<<"grade A"<<endl;
        break;
    case 8:
        cout<<"GRADE B"<<endl;
        break;
    case 7:
        cout<<"GRADE C"<<endl;
        break;
    case 6:
        cout<<"GRADE D"<<endl;
        break;
    default:
        cout<<"FAIL"<<endl;
        break;
    }
    return 0;
}