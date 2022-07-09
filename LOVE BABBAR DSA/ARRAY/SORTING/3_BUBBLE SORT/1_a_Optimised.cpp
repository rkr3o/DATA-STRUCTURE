// optimised code of Bubble Sort on Best case it will O(n);
#include <bits/stdc++.h>
using namespace std;
int lucifer(int arr[], int n)
{
    int swapped = false;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true ;
            }
        }

        if (swapped == false)
        {
            break;
        }
    }
    // No Swapping happened, array is sorted
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

    lucifer(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
