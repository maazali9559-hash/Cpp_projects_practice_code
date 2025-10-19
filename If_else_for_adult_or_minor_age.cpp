#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter yor age:"<<endl;
    cin>>a;
    if(a>=18){
        cout<<"ADULT"<<endl;
    }
    else{
        cout<<"MINOR"<<endl;
    }
    return 0;
}