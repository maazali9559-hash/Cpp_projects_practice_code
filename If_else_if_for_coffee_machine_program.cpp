#include"iostream"
using namespace std;
int main(){
    int c;
    cout<<"Enter your choice"<<endl;
    cin>>c;
    if(c == 1){
        cout<<"Espresso"<<endl;
    }
    else if(c == 2){
        cout<<"Cappuccino"<<endl;
    }
    else if(c == 3){
        cout<<"Latte"<<endl;
    }
    else if(c == 4){
        cout<<"Black Coffee"<<endl;
    }
    else {
        cout<<"Invalid Choice"<<endl;
    }
    return 0;
}