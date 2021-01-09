#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> integers;
  while(n--){
    int a;
    cin >> a;
    integers.push_back(a);
  }
  int i;
  cin >> i;
  integers.erase(integers.begin() + (i-1));
  int j,k;
  cin >> j >> k;
  integers.erase(integers.begin() + (j-1), integers.begin() + (k-1));
  cout << integers.size() << endl;
  for (int i = 0; i < integers.size(); i++)
  {
    cout << integers[i] << " ";
  }
  
}