#include <iostream>

using namespace std;

int main()
{
    int input ;

    cout<<"1. Play game\n";
    cout<<"2. Load Game\n";
    cout<<"3. Play multi-player\n";
    cout<<"4. Exit\n";
    cout<<"Selection: ";
    cin>>input;
    cout<<"\n";

    switch (input)
    {
    case 1:
        cout<<"Play Game Called";
        break;
    case 2:
        cout<<"Load Game Called";
        break;
    case 3:
        cout<<"Play multi-player Called";
        break;
    case 4:
        cout<<"Thanks For Playing";
        break;
    
    default:
        cout<<"Bad input, getting!!";
        break;
    }
    return 0;
}