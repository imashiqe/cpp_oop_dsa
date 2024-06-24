#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,q ;
    cin>>n>>q;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    while (q--)
    {
       int x;
       cin>>x;
       bool flag=false;
       for(int i=0; i<n; i++)
       {
        flag=true;
        break;
       }
       if(flag==true) cout<<"found"<<endl;
       else cout<<"not found" <<endl;
    }
    
    return 0;
}