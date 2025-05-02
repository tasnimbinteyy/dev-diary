#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
  int m,n; cin>>m>>n;

  unordered_map<string,string>mp;

  for(int i  = 0; i<n; i++){
    string a,b; cin>>a>>b;

    if(b.size()<a.size()) mp[a] = b;

    else mp[a] = a;
  }

  for(int i = 0; i<m; i++){
    string word;
    cin>>word;
    cout<<mp[word]<<" ";
  }
  return 0;
}

