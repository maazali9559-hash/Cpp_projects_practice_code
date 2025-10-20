#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter temperature:"<<endl;
    cin>>t;
    if(t<0){
        cout<<"Freezing"<<endl;
    }
    else{
        cout<<"Not Freezing"<<endl;
    }
    return 0;
}