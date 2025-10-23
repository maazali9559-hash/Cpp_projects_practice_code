#include<iostream>
using namespace std;
int main(){
    int v;
    cout<<"Enter your vehicle :"<<endl;
    cin>>v;
    if(v == 1){
        cout<<"Petrol"<<endl;
    }
    else if(v == 2){
        cout<<"petrol or Hybrid"<<endl;
    }
    else if(v == 3){
        cout<<"Diesel"<<endl;
    }
    else{
        cout<<"Invalid Vehicle"<<endl;
    }
    return 0;
}

