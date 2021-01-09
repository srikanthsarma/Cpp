#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,q;
  cin >> n >> q;
  vector< vector<int> > a;

  for (int i = 0; i < n; ++i)
  {
      vector<int> A;
      int k;
      cin >> k;
      for (int j = 0; j < k; j++)
      { int x;
      cin >> x;
        A.push_back(x);
      }
      a.push_back(A); 

  }
  for (int l = 0; l < q; ++l)
  {
    int b,c;
    cin >> b >> c;
    cout << a[b][c] << endl;
  }
  
  
  

}
