#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"Enter Your Phone Battery :"<<endl;
    cin>>b;
    if(b<=10){
        cout<<"Charge Now!"<<endl;
    }
    else if(b<10 && b<=30){
        cout<<"Low Battery"<<endl;
    }
    else if(b<30 && b<=80){
        cout<<"Battery Normal"<<endl;
    }
    else{
        cout<<"Battery Full"<<endl;
    }
    return 0;
}