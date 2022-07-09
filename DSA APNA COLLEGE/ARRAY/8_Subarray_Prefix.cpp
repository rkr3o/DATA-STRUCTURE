#include <bits/stdc++.h>
using namespace std;

int subarraySum(int arr[], int n)
{
    int largestSum = INT_MIN;
    int prefixsum[n] = {0};
    prefixsum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixsum[i] = prefixsum[0] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currentSum = 0;
            currentSum = i > 0 ? prefixsum[j] - prefixsum[i - 1] : prefixsum[j];
            largestSum = max(largestSum, currentSum);
        }
    }

    return largestSum;
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

    subarraySum(arr, n);
}