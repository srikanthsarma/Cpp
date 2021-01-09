#include<bits/stdc++.h>
using namespace std;


int main() {
    int N;
    int arr[10000];
    cin>>N;
    int t=N;
    while(t--){
    int a;
    cin>> a;
    arr[t+1]=a;
    }
    for (int i = 1; i <=N ; ++i)
    {
      cout<<arr[i]<<" ";
    }
    


    return 0;
}