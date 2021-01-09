#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> integers;
  for (int i = 0; i < n; ++i)
  {
    int a;
    cin >> a;
    integers.push_back(a);
  }
  sort(integers.begin(),integers.end());
  for (int i = 0; i < n; i++)
  {
    
    cout << integers[i] << " ";
  }
}