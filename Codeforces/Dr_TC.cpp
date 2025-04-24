#include<iostream>
#include<string>
using namespace std;

int main(){

   int t,r; cin>>t;

   while(t--){
    int n; cin>>n;

    string s; cin>>s;

    int one = 0;

    for(int i = 0; i<s.size();i++){
        if(s[i] == '1') one++;
   }

    r = (n * one) + (n - 2 * one); cout<<r<<endl;
   }


}
