#include <bits/stdc++.h>
using namespace std;
// using m indexing
vector<int> lucifer(vector<int> &arr, int n, int m)
{
    int l = m+1, h = n - 1;
    
        while (l <= h)
        {
            swap(arr[l++], arr[h--]);
        }
    

    return arr;
}

void result(vector<int> arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    vector<int> ans = lucifer(arr, n, m);

    result(arr, n);
}