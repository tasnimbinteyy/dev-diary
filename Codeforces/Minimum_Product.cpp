#include<iostream>
using namespace std;

int main(){

int t; cin>>t;
while(t--){
    int a,b,x,y,n; cin>>a>>b>>x>>y>>n;

    int rA = min(a-x,n);
    int A = a - rA;
    int B = b - min(b - y, n-rA);
    long long op1 = 1LL * A * B;

    int rB = min(b-y,n);
    int B2 = b - rB;
    int A2 = a - min(a-x, n - rB);
    long long op2 = 1LL * A2 * B2;

    cout<<min(op1,op2)<<endl;
}
return 0;
}
