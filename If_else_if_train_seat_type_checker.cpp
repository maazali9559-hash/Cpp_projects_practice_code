#include<iostream>
using namespace std;
int main(){
    int sn;
    cout<<"Enter Your Seat Number :"<<endl;
    cin>>sn;
    if(sn>=1 && sn<=24 ){
        cout<<"Lower Berth"<<endl;
    }
    else if(sn>24 && sn<=48){
        cout<<"Middle Berth"<<endl;
    }
    else if(sn>48 && sn<=72){
        cout<<"Upper Berth"<<endl;
    }
    else{
        cout<<"Invalid Seat Number"<<endl;
    }
    return 0;
}
