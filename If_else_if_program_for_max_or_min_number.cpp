#include<iostream>
using namespace std;
int main(){
    int m,n,b;
    cout<<"Enter your numbers:"<<endl;
    cin>>m>>n>>b;
    if(m>n && m>b){
        cout<<m<<" is maximum"<<endl;
    }
    else if(n>m && m>b){
        cout<<n<<" is maximum"<<endl;
    }
    else{
        cout<<b<<" is maximum"<<endl;
    }
    if(m<n && m<b){
        cout<<m<<" is minimum"<<endl;
    }
    else if(n<m && n<b){
        cout<<n<<" is minimum"<<endl;
    }
    else{
        cout<<b<<" is minimum"<<endl;
    }
    return 0;

}