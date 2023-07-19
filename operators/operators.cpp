#include <iostream>

using namespace std;

int main()
{
  //   int i =1;
  //   int j =2;
  //   int k;

  //   k = i + j + i++ + j++ + ++i + ++j;

  //   //i = i++ + ++i;
  
  // cout<<i<<"j "<<" "<<k<<endl;


//   int i=0;
//   //0 //0 //1  //1
//   i = i++ - -- i + ++i - i--;
//  //1
//   cout<<i<<endl;

int i=10, j=20, k;
   //10 //9 //19 //20 //10 //19
   k = i-- - i++ + --j - ++j + --i - j-- +  ++i - j++;

   cout<<i<<endl;
   cout<<j<<endl;
   cout<<k<<endl;


    return 0;
}