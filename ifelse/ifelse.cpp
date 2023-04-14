#include <iostream>

using namespace std;

int main()
{  
    int savings;
    cin>>savings;
    if(savings>5000){
       if(savings>100000){
         cout<<"air trip\n";
       }else{
         cout<<"roadtrip";
       }
    }else if(savings>2000){
        cout<<"aWS\n";
    }else{
        cout<<"Friends\n";
    }
    return 0;
}