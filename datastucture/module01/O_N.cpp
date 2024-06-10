#include<iostream>

using namespace std;

int main ()
{
    int  n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
   
   int s=0;

   for(int i=0; i<n; i+=2)
   {
    if(i%2==0)
    {
        s+=a[i];
    }
   }

   cout<<s<<endl;
    return 0;
    
}