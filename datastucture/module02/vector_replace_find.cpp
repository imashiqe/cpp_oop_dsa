#include<bits/stdc++.h>

using namespace std;

int main()
{
    // Example to replace all occurrences of 2 with 100
    // vector<int> v = {1, 2, 3, 4, 5, 1, 2, 4, 5, 3, 2};
    // replace(v.begin(), v.end(), 2, 100);
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    vector<int> v = {1, 2, 3, 4, 5, 1, 2, 4, 5, 3, 2};
  
    // Finding the first occurrence of 3 in the vector
    auto it = find(v.begin(), v.end(), 3);
    if (it == v.end())
        cout << "Not found";
    else
        cout << "Found";
    
    return 0;
}
