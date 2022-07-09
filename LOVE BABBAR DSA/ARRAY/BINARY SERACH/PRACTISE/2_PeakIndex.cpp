#include <bits/stdc++.h>
using namespace std;
int lucifer(vector<int> vect, int n)
{
    int l = 0, h = n - 1;

    int mid;

    while (l < h)
    {
        mid = l + (h - l) / 2;

        if ( vect[mid] < vect[mid + 1])
        {
            l = mid + 1;
        }
        else
            h = mid;
    }

    return l;
}
int main()
{
    int n;
    cin >> n;

    vector<int> vect;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vect.push_back(a);
    }

    cout<<lucifer(vect, n);
}