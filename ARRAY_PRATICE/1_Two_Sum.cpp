#include <bits/stdc++.h>
using namespace std;

void ans(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                cout << i << "," << j << endl;
                break;
            }
        }
    }
}
/*[2,7,11,15]
9
[3,2,4]
6
[3,3]
6*/
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