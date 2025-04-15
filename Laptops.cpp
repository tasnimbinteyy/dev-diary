#include<iostream>
using namespace std;

int main(){
  int n,a,b; cin>>n;

  int alex = 0;
  for(int i = 0; i<n; i++){
    cin>>a>>b;

    if(a<b) alex++;
  }

  if(alex >= 1)  cout<< "Happy Alex" <<endl;

  else cout<< "Poor Alex" <<endl;
}
