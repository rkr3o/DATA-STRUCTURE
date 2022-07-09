#include <bits/stdc++.h>

using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    string binary = bitset<4>(n).to_string(); //to binary
    cout<<binary<<"\n";

    unsigned long decimal =  bitset<8>(binary).to_ulong();
    cout<<decimal<<"\n";
    return 0;
}