#include <bits/stdc++.h>
using namespace std;

void fun(int n, int i)
{
    if (i > n)
        return;

    fun(n, i + 1);
    cout << i << endl;
}
int main()
{
    int n;
    cin >> n;

    fun(n, 0);
}