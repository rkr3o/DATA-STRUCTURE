#include<iostream>
#include<array>

using namespace std ;

int main()
{

    array<int,4> arr = { 2 , 4 , 5 , 60};

    int size = arr.size();
    
    cout<<size<<endl;

    cout<<arr.at(2)<<endl;

    cout<<arr.front()<<endl;

    cout<<arr.back()<<endl;

    cout<<arr.empty()<<endl;


    
return 0 ;
}