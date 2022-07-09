//Queue : FIFO

#include<iostream>
#include<queue>
using namespace std ;

int main()
{
    queue<string> q ;
    q.push("RAVI");
    q.push("KUMAR"); 
    q.push("RANA");

    cout<<q.front()<<endl;
    cout<<q.back();
}