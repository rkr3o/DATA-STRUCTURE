#include <bits/stdc++.h>
using namespace std;

int getPivot(int arr[] , int n )
{
    int l = 0 , h = n-1 , mid ;

    while(l<h)
    {
        mid = l+(h-l)/2;

        if(arr[mid]>=arr[0])
        {
            l = mid+1 ;
        }
        else h = mid ;
    }

    return l ;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << getPivot(arr, n);
}