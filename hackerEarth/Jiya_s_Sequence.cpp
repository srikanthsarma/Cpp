#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
     vector<int> ints;
    for(int i = 0; i < n; i++){
      int x;
      cin >> x;
      ints.push_back(x);
    }
    long long  m_out = ints[0]*1LL;
    for (int i =1; i < ints.size(); i++ ){
      m_out *= ints[i]; 
    }
    if((m_out%10 == 2) || (m_out%10 == 3) || (m_out%10 == 5)){
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }



  }
}