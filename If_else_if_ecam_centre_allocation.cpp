#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter your roll number :"<<endl;
    cin>>r;
    if(r>=1 && r<=100){
        cout<<"Centre A"<<endl;
    }
    else if(r>=101 && r<=200){
        cout<<"Centre B"<<endl;
    }
    else if(r>=201 && r<=300){
        cout<<"Centre C"<<endl;
    }
    else{
        cout<<"Centre D"<<endl;
    }
    return 0;
}
