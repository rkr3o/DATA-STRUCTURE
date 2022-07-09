#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)

    {
        if (arr[i] < arr2[j])
        {
            arr3[k++] = arr[i++];
        }

        else
            arr3[k++] = arr2[j++];
    }

    while (i < n)
    {
        arr3[k++] = arr[i++];
    }
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}

void print(int arr3[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << arr3[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[3] = {6, 7, 8};
    int arr3[8];
    merge(arr, 5, arr2, 3, arr3);

    print(arr3, 8);
}