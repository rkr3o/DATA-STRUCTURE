#include <bits/stdc++.h>
using namespace std;

int kadanes(int arr[], int n)
{
    int best = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        best = max(best, sum);

        // if(sum>best)
        // {
        //     best = sum ;
        // }

        // if(sum<0)
        // {
        //     sum = 0 ;
        // }
    }

    return best;
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

    cout << kadanes(arr, n);
}