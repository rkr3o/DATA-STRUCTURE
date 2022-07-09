#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0, currLength = 0, maxLength = 0;
    int st = 0, maxSt = 0;

    while (true)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            maxLength = max(currLength, maxLength);
            currLength = 0;
            maxSt = st;
            st = i + 1;
        }

        else

            currLength++;
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << maxLength << endl;

    for (int i = 0; i < maxLength; i++)
    {
        cout << arr[i + maxSt]  ;
    }
}