// stack : LIFO
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("RAVI");
    s.push("KUMAR");
    s.push("RANA");

    cout << s.top() << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
}
