#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter time :"<<endl;
    cin>>m;
    if(m>=6 && m<=11){
        cout<<"Breakfast menu"<<endl;
    }
    else if(m>=12 && m<=16){
        cout<<"Lunch menu"<<endl;
    }
    else if(m>=17 && m<=22){
        cout<<"Dinner time"<<endl;
    }
    else{
        cout<<"Restaurant Closed"<<endl;
    }
    return 0;
}