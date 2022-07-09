#include <bits/stdc++.h>
using namespace std;

int getPivot(vector<int> &arr, int n)
{
    int l = 0, h = n - 1, mid;

    while (l < h)
    {
        mid = l + (h - l) / 2;
        if (arr[mid] >= arr[0])
        {
            l = mid + 1;
        }
        else
            h = mid;
    }
    return l;
}

int BinSearch(vector<int> &arr, int n, int key)
{
    int l = 0, h = n - 1, mid;
    while (l <= h)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            l = mid + 1;
        }
        else
            h = mid - 1;
    }
    return mid;
}

int result(vector<int> arr , int n , int key )
{ 
    int piv = getPivot(arr , n );

    if(key > piv and key <= arr[n-1]) 
    {
        return BinSearch(arr , n  , key);
    }
    else return BinSearch(arr , n , key );
}

int main()
{
    int n;
    cin >> n;
    int key;
    cin >> key;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        arr.push_back(a);
    }

    getPivot(arr, n);
    BinSearch(arr , n , key); 
    
    cout<<result(arr , n , key);
    
}