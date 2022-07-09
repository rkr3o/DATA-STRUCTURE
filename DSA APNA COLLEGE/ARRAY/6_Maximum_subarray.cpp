#include <bits/stdc++.h>
using namespace std;

int largestSum(int arr[], int n)
{
    int sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currSum = 0;

            for (int k = i; k <= j; k++)
            {
                currSum += arr[k];
            }

            sum = max(sum, currSum);
        }
    }

    return sum;
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

    cout << largestSum(arr, n);
}