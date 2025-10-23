#include"iostream"
using namespace std;

int main()
{
    int n1, n2;
    char opt;

    cout<<"Enter your numbers: "<<endl;
    cin>> n1 >> n2;
    cout<<"Enter operator: "<<endl;
    cin>>opt;

    if(opt == '+'){

        cout<<"Sum = "<<n1+n2<<endl;

    }
    else if(opt == '-'){
        cout<<"Sub = "<<n1-n2<<endl;
    }
    else if(opt == '*'){
        cout<<"Mul = "<<n1*n2<<endl;
    }
    else if(opt == '/'){
        cout<<"Div = "<<n1/n2<<endl;
    }
    else if(opt == '%'){
        cout<<"Mod = "<<n1%n2<<endl;
    }
    else{
        cout<<"Invalid Operator"<<endl;
    }

    return 0;
}
