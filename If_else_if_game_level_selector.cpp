#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter Your Level :"<<endl;
    cin>>l;
    if(l>=0 && l<=10){
        cout<<"Beginner"<<endl;
    }
    else if(l<=11 && l<=50){
        cout<<"Intermediate"<<endl;
    }
    else if(l<=51 && l<=80){
        cout<<"Expert"<<endl;
    }
    else{
        cout<<"Legend"<<endl;
    }
    return 0;
}