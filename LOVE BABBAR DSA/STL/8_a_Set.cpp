#include <bits/stdc++.h>
using namespace std;
int getTotalRewards(int n, vector<int> arr)
{

  unordered_set<int> s;
  for (int i : arr)
  {
    s.insert(i);
  }
  // Search for element "is"
  unordered_set<int>::iterator it = s.find(0);
  // check if iterator is valid
  if (it != s.end())
  {
    // Deletes the element pointing by iterator it
    s.erase(it);
  }

  return s.size();
}

int main()
{
  int n;
  cin >> n;

  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    v.push_back(a);
  }

  cout << getTotalRewards(n, v);
}