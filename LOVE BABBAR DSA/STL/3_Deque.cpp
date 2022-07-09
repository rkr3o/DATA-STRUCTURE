// deque : double ended queue : insertion and deletion is allowed in both ending
// deque have multiple fixed static arrays

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    d.push_back(2);
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }

    cout << endl;

    d.pop_back();

    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    d.pop_front();

    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }

    cout << endl;

    cout << d.front() << " " << d.back() << endl;

    // direct accessing
    cout << d.at(1) << " " << d.at(0) << " " << d.at(2);
}