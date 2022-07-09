#include <bits/stdc++.h>
using namespace std;

void fun(int n, int i)
{
    if (i > n)
        return ;

    cout << i << endl;
    fun(n, i + 1);
}
int main()
{
    int n;
    cin >> n;

    fun(n, 0);
}