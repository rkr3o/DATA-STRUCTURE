class Solution
{
public:
    int binSearch(vector<int> &arr, int l, int h, int key)
    {
        int mid;
        if (l > h)
        {
            return -1;
        }
        mid = l + (h - l) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            return binSearch(arr, mid + 1, h, key);
        }
        else
        {
            return binSearch(arr, l, mid - 1, key);
        }
        return -1;
    }
    int search(vector<int> &arr, int key)
    {
        int l = 0, h = arr.size() - 1, mid;

        int ans = binSearch(arr, l, h, key);

        if (ans == -1)
            return -1;

        // return index of key
        else
            return ans;
    }
};