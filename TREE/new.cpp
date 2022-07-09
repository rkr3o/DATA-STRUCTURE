
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; ++i)
    {
        char st;
        cin >> st;
        s.push_back(st);
    }
    vector<int> v;
    string s2 = s;

    for (int i = 0; i < n; ++i)
    {
        for
        
        if (s[i] != s2[i])
        {
            cout << i << " ";
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        lucifer();
    }
}