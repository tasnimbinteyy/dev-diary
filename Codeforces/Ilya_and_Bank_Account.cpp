#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int n;cin>>n;
 if(n>=0) cout<<n<<endl;
 else{
    int r1 = n/10; int r2 = (n / 100) *  10 + n%10;

    cout<<max(r1,r2)<<endl;

    //if (r1>r2) cout<<r1<<endl;
    //else if (r1<r2) cout<<r2<<endl;
   }
  return 0;
}
