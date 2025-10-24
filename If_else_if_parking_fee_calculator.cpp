#include<iostream>
using namespace std;
int main(){
    int p;
    cout<<"Number of hour parked :"<<endl;
    cin>>p;
    if(p>=0 && p<=1){
        cout<<"FREE"<<endl;
    }
    else if(p>=2 && p<=4){
        cout<<"Rs. 50"<<endl;
    }
    else if(p>=5 && p<=8){
        cout<<"Rs. 100"<<endl;
    }
    else{
        cout<<"Rs. 200"<<endl;
    }
    return 0;
}