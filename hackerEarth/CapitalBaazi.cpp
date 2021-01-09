#include<bits/stdc++.h>
using namespace std;

int main(){
  string inputStr = "";
  getline(cin , inputStr);
  transform(inputStr.begin(),inputStr.end(),inputStr.begin(), ::toupper);
  string word = "";
  for(auto x : inputStr){
    if (x == ' ')
    {
      cout << word << endl;
      word = "";

    }
    else
    {
     word += x;

    }
    
  }
    cout << word << endl;

  
}