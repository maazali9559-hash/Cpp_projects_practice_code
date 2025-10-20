#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter your marks:"<<endl;
    cin>>m;
    if(m>=90){
        cout<<"Grade A"<<endl;
    }
    else if(m>=80 && m<=89){
        cout<<"Grade B"<<endl;
    }
    else if(m>=70 && m<=79){
        cout<<"Grade C"<<endl;
    }
    else if(m>=60 && m<=69){
        cout<<"Grade D"<<endl;
    }
    else if(m>=50 && m<=59){
        cout<<"Grade E"<<endl;
    }
    else {
        cout<<"FAIL"<<endl;
    }
    }
