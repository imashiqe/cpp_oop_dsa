#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{  
    char x;
    cin >> x;

    switch (x)
    {
    case  'a':
        cout << "Vowel";
        break;

     case  'e':
        cout << "Vowel";
        break;
     case  'i':
        cout << "Vowel";
        break;
     
      case  'o':
        cout << "Vowel";
        break;
     case  'u':
        cout << "Vowel";
        break;

    default:
       cout << "Consonant";
        break;
    }
    return 0;
}