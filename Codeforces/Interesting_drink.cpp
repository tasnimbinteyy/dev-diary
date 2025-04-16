#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   long long n,q,m; cin>>n;
   vector<long long>x(n);

   for(int i  = 0; i<n; i++) cin>>x[i];

   sort(x.begin(),x.end());
   cin>>q;
   for(int j  = 0; j<q; j++){
     cin>>m; int count = upper_bound(x.begin(),x.end(), m) - x.begin();
     /*for(int i  = 0; i<n; i++){
        if(m >= x[i]) count++;
     }*/

     cout<<count<<endl;
   }
  return 0;
}

