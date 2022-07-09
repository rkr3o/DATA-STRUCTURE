#include <bits/stdc++.h>
using namespace std;

void prefixSum(int arr[], int n)
{
    int sum[n] = {0};
    sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[0] + arr[i];
        cout << sum[i] << " ";
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

    prefixSum(arr, n);
}