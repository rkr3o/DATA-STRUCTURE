#include <bits/stdc++.h>
using namespace std;

void getResult(vector<int> arr, int n)
{
    int sum = 0;
    vector<int> vect;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ,";
                sum += arr[k];
            }
            cout << endl;
        }
        vect.push_back(sum);
        cout << "your subarray sum is : " << sum << " " << endl;
        sum = 0;
        cout << "Your max sum is : " << *max_element(vect.begin(), vect.end()) << endl;
    }
}
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    getResult(v, n);
}