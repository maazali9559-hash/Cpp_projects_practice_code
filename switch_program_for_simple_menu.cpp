#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter your choice (1-4) :"<<endl;
    cin>>m;
    switch(m){
        case 1:
        cout<<"TEA"<<endl;
        break;
        case 2:
        cout<<"COFFEE"<<endl;
        break;
        case 3:
        cout<<"JUICE"<<endl;
        break;
        case 4:
        cout<<"EXIT"<<endl;
        break;
        default:
        cout<<"Invalid Number"<<endl;
    }
    return 0;
}