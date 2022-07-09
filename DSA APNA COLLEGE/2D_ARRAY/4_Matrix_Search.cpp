#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int target;
    cin >> target;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == target)
            {
                found = true;
            }
        }
    }

    if (found)
    {
        cout << "Found" << endl;
    }
    else
        cout << "Not found" << endl;
}