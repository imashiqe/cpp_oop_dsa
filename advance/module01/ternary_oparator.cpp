#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    (n % 2 == 0) ? cout << "Even" << endl : cout << "Odd" << endl;
    return 0;
}