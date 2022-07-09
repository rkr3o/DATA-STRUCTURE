#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << endl;
    cout << binary_search(v.begin(), v.end(), 4);

    int a = 10, b = 20;
    cout << endl;
    swap(a, b);
    cout << a << endl; 

    cout << max(a, b) << endl;
    cout << min(a, b) << endl;
}