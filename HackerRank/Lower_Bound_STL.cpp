#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> ints;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    ints.push_back(a);
  }
  int q;
  cin >> q;
  while(q--){
    int x;
    cin >> x;
    vector<int> :: iterator out;
    out = lower_bound(ints.begin(),ints.end(),x);
    int Out = out - ints.begin();
    if(x == ints[Out]){
      cout << "Yes " << (Out+1) << endl;
    }
    else{
      cout << "No " << (Out+1) << endl;
    }

  }
  
}