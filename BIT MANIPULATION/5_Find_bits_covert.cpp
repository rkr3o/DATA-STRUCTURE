#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int diffBit = a ^ b;

    int counter = 0;
    //    int counter = __builtin_popcount(a); we can use this stl function  
    while (diffBit > 0)
    {
        diffBit = diffBit & (diffBit - 1);
        counter++;
    }
    cout << counter << endl;
}