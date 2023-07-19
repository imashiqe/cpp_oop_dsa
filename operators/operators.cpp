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


  int i=0;
  //0 //0 //1  //1
  i = i++ - -- i + ++i - i--;
 //1
  cout<<i<<endl;

    return 0;
}