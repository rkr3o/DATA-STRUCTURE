// dynamic array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> vect;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vect.push_back(a);
    }
    sort(vect.begin(), vect.end());
    // remove duplicate element
    
    cout << "After removing duplicate : " << endl;

    vect.erase(unique(vect.begin(), vect.end()), vect.end());

    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }

    cout << endl;

    int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // reverse element
    cout << "Reversing element : " << endl;
    reverse(data + 2, data + 6);

    for (int i = 0; i < 10; i++)
    {
        cout << data[i] << " ";
    }

    cout << endl;

    vector<int> v;
    v.push_back(0); // input
    cout << v.capacity() << " " << v.size() << endl;

    v.push_back(2);
    v.push_back(3);

    cout << "Capacity and Size : " << endl;
    cout << v.capacity() << " " << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    cout << "Direct Access : " << endl;
    // direct accessing
    cout << v.at(1) << endl;
    cout << v.at(2) << endl;

    cout << "Firts and Last element : " << endl;
    // first and last element
    cout << v.front() << " " << v.back() << endl;
}
