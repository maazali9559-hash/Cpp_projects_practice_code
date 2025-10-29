#include<iostream>
using namespace std;
int main(){
    char t;
    cout<<"Enter traffic light colour : "<<endl;
    cin>>t;
    switch (t)
    {
    case 'R':
        cout<<"STOP"<<endl;
        break;
    case 'Y':
        cout<<"READY"<<endl;
        break;
    case 'G':
        cout<<"GO"<<endl; 
        break;
    
    default:
        cout<<"Try again"<<endl;
        break;
    }
    return 0;


}