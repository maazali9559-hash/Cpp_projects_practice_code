#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number between 1 and 9 :"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"ONE"<<endl;
        break;
    case 2:
        cout<<"TWO"<<endl;
        break;
    case 3:
        cout<<"THREE"<<endl;
        break;
    case 4:
        cout<<"FOUR"<<endl;
        break;
    case 5:
        cout<<"FIVE"<<endl;
        break;
    case 6:
        cout<<"SIX"<<endl;
        break;
    case 7:
        cout<<"SEVEN"<<endl;
        break;
    case 8:
        cout<<"EIGHT"<<endl;
        break;
    case 9:
        cout<<"NINE"<<endl;
        break;
    default:
        cout<<"INVALID NUMBER"<<endl;
        break;
    }
    return 0;
}