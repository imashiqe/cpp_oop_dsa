#include <iostream>

using namespace std;

int main()
{
     char button;
     cout<<"Input a character: ";
     cin>>button;

     switch (button)
     {
     case 'a':
        cout<<"Hello"<<endl;
        break;
     case 'b':
        cout<<"Hi"<<endl;
        break;
     case 'c':
        cout<<"What are you doing"<<endl;
        break;
     case 'd':
        cout<<"Everything Okey"<<endl;
        break;

     
     default:
      cout<<"I am  still Learning More!"<<endl;
        break;
     }
    return 0;
}