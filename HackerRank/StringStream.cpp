#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(const string& str) {
	vector<int> integers;
  stringstream sso; 
  sso << str;
    int a;
    char ch = ',';
  while(sso >> a)  
  {
    integers.push_back(a);
    sso >> ch ; 
  }
  return integers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}