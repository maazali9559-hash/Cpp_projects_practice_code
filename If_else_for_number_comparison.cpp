#include<iostream>
using namespace std;
int main(){
    int n,c;
    cout<<"Enter your numbers:"<<endl;
    cin>>n>>c;
    if(n>c){
        cout<<"First is greater"<<endl;
    }
    else{
        cout<<"Second is greater or equal "<<endl;
    }
    return 0;
}