#include <bits/stdc++.h>
using namespace std;
 bool check (int N , int i )
    {
        if( N | (1 << i) )
            return true;
        else
            return false;
    }
int main()
{
    int N;
    cin >> N;

    int  i;
    cin >> i;
    // int mask = 1 << (pos);
    // cout<<(number|mask);
    // if the bit is one then well and good else it will be converted to 1

    cout<<check(N,i);

} 