#include <iostream>

using namespace std;

int main()

{
    int  n1,n2;
    cout<<"Input 2 numbers: ";
    cin>>n1>>n2;

    char op;
    cout<<"Input an operator";
    cin>>op;

    switch (op)
    {
    case  '+':
        cout<<n1+n2<<endl;
        break;
    case  '-':
        cout<<n1-n2<<endl;
        break;
    case  '*':
        cout<<n1*n2<<endl;
        break;
    
    case  '/':
        cout<<n1/n2<<endl;
        break;
    
    default:
    cout<<"Enter valid Operator"<<endl;
        break;
    }
    return 0;
}