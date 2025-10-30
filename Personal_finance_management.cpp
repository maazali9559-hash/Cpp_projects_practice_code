#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter Your Name :"<<endl;
    cin>>name;
    cout<<"Welcome Sir :"<<endl;
    cout<<"This Program Is for your Financial Condition"<<endl;
    
    float inc;
    cout<<"Enter your Income :"<<endl;
    cin>>inc;
    int f;
    cout<<"Enter Your Food Expenses :"<<endl;
    cin>>f;
    int b;
    cout<<"Enter Your Bills Expenses :"<<endl;
    cin>>b;
    int m;
    cout<<"Enter Your Medical Expenses :"<<endl;
    cin>>m;
    int t;
    cout<<"Enter Your Transport Expenses :"<<endl;
    cin>>t;
    float te = f+b+m+t;
    cout<<"Total Expenses ="<<te<<endl;
    
    int budget = inc - te;
    cout<<"BALANCE :"<<budget<<endl;
    if(te>inc){
        cout<<"WARNING! Your expenses is more than your income"<<endl;
    }
    else {
        cout<<"GOOD JOB"<<endl;
    }

    int bl;
    cout<<"Enter your budget limit :"<<endl;
    cin>>bl;
    if(te>bl){
        cout<<"Budget exceeded!"<<endl;
    }
    else{
        cout<<"Within budget"<<endl;
    }

    int pm;
    cout<<"Select Payment Perefence :"<<endl;
    cout<<"1. CASH"<<endl;
    cout<<"2. DEBIT CARD"<<endl;
    cout<<"3. JAZZCASH"<<endl;
    cout<<"4. EASYPAISA"<<endl;
    cin>>pm;
    switch (pm)
    {
    case 1:
        cout<<"CASH"<<endl;
        break;
    case 2:
        cout<<"DEBIT CARD"<<endl;
        break;
    case 3:
        cout<<"JAZZCASH"<<endl;
        break;
    case 4:
        cout<<"EASYPAISA"<<endl;

    default:
        cout<<
        break;
    }
           
   
    
    

    


}