#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_front(30);
    l.push_front(14);

    for (int &x : l)
    {
        cout << x << " ";
    }

    l.pop_back(); 
    l.pop_front();
    cout<<endl;
    for (int &x : l)
    {
        cout << x << " ";
    }
// erase the list
l.push_back(11);
l.push_front(12);
cout<<endl;

    l.erase(l.begin());

    for (int &x : l)
    {
        cout << x << " ";
    }

    cout<<endl;


}