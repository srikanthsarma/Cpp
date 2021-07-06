#include <bits/stdc++.h>
using namespace std;

int main()
{
  int Q; // Number of queries.
  cin >> Q;
  set<int> s; // Set of integers.

  for (int i = 0; i < Q; i++)
  {
    int query, data;
    cin >> query >> data;
    switch (query)
    {
    case 1:
      s.insert(data);
      break;
    case 2:
      s.erase(data);
      break;
    case 3:
      set<int>::iterator itr = s.find(data); // Iterator for set.
      if (itr != s.end())
      {
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
      break;
    }
  }
}