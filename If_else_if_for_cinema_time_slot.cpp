#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter your time :"<<endl;
    cin>>t;
    if(t>=8 && t<=11){
        cout<<"Morning show"<<endl;
    }
    else if(t>=12 && t<=16){
        cout<<"Matinee Show"<<endl;
    }
    else if(t>=17 && t<=20){
        cout<<"Evening show"<<endl;
    }
    else if(t>=21 && t<=23){
        cout<<"Night show"<<endl;
    }
    else{
        cout<<"Cinema closed"<<endl;
    }
    return 0;
}