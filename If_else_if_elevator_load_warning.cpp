#include<iostream>
using namespace std;
int main(){
    int w;
    cout<<"Enter Passengers Weight :"<<endl;
    cin>>w;
    if(w<400){
        cout<<"Safe To Operate"<<endl;
    }
    else if(w>=400 && w<=600){
        cout<<"Warning: Near Limit"<<endl;
    }
    else{
        cout<<"Overload! Reduce Weight"<<endl;
    }
    return 0;
}