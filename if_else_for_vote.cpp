#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter yor age:"<<endl;
    cin>>a;
    if(a>=18){
    cout<<"You can cast vote"<<endl;
    }
    else{
        cout<<"You can't cast vote"<<endl;
    }
    return 0;
}