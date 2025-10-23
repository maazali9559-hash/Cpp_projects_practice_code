#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            if(b<c){
                cout<<a<<" is max"<<endl;
                cout<<b<<" is min"<<endl;
            }else{
                cout<<a<<" is max"<<endl;
                cout<<c<<" is min"<<endl;
            }
        }else{
            cout<<c<<" is max"<<endl;
            cout<<b<<" is min"<<endl;
        }
    }else if (b>c){
        cout<<b<<" is max"<<endl;
    
       if(c<a){
        cout<<c<<" is min"<<endl;
       }
       else{
        cout<<a<<" is min"<<endl;
       }
    }
    else{
        cout<<c<<" is max"<<endl;
        cout<<a<<" is min"<<endl;
    }
    return 0;
}