#include <bits/stdc++.h>
using namespace std;

int morePrecision(int n, int precision, int temp)
{

    int factor = 1;
    int res = temp;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (int j = res; j * j <= res; j = j + factor)
        {
            res = j;
        }
    }
    
}
int squrt(int n)
{
    int l = 0, h = n, mid;
    long long int ans = 0;
    while (l <= h)
    {

        mid = l + (h - l) / 2;
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            h = mid - 1;
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;

    int temp = squrt(n);
    cout << morePrecision(n, 3, temp);
}