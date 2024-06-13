#include<bits/stdc++.h>

using namespace std;

int main()
{
    // Example vector initialization
    // vector<int> v; // type 1
    // vector<int> v(5); // type 2
    // vector<int> v(5,10); // type 3
    // vector<int> v2(5,100); // type 4
    // vector<int> v(v2); // type 5
    // int a[6]={1,2,3,4,5,6}; // array initialization
    // vector<int> v(a,a+6); // vector from array

    vector<int> v={2,10,3}; // current working vector initialization

    // Output vector elements
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;
}
