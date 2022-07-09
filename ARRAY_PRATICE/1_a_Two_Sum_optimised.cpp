#include <bits/stdc++.h>
using namespace std;

void ans(int arr[], int n, int key)
{
    int l = 0, h = n - 1;
    while (l < h)
    {
        if (arr[l] + arr[h] == key)
        {
            cout << l << ", " << h;
            return;
        }
        else if (arr[l] + arr[h] > key)
        {
            h--;
        }
        else
            l++;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    ans(arr, n, key);
}