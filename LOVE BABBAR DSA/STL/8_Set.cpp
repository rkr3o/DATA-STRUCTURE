// only store unique element : O(log n) -> insertion complexity
#include <iostream>
#include <set>
using namespace std;
int main()
{

    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (auto i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    // erase function

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for (auto i : s)
    {
        cout << i << " ";
    }

    // check whether number is prrsent or not
    cout << s.count(5);
}