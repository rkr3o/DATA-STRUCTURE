#include<iostream>
#include<queue>
using namespace std  ;

int main()
{
    int n ;
    cin>>n;
    priority_queue<int> p;

    for(int i = 0 ; i < n ; i++)
    { 
        int a ;
        cin >> a;
        p.push(a);
    }

    cout<<p.top();

}