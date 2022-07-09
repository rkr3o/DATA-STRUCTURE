#include <bits/stdc++.h>
using namespace std;

vector<int> lucifer(vector<int> &arr, int n)
{
    int l = 0, h = n - 1;

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

    vector<int> ans = lucifer(arr, n);

    result(arr, n);
}