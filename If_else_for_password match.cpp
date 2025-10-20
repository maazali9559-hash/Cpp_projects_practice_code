#include<iostream>
using namespace std;
int main(){
    int g,d;
    cout<<"Enter password:"<<endl;
    cin>>g>>d;
    if(g==d){
        cout<<"Access Granted"<<endl;
    }
    else{
        cout<<"Access Denied"<<endl;
    }
    return 0;
}
