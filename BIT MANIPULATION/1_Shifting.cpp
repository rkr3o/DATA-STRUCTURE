#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 50;

    int x = n << 1;
    int y = n << 2; // multiplyin by 2 
    int z = n << 3;

    int a = n >> 1;
    int b = n >> 2;
    int c = n >> 3;

    cout << x << " " << y << " " << z << endl; // dividing by 2
    cout << a << " " << b << " " << c << endl;
}