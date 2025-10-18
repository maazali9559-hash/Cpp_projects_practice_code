#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter your number:"<<endl;
    cin>>m>>n;
    if(m>n){
        cout<< "maximum ="<<m;
    }
    else{
        cout<< "minimum ="<<n;
    }
    return 0;
}