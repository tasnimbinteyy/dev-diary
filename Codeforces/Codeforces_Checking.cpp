#include<iostream>
using namespace std;
int main(){

   int n; cin>>n;
   char c;

   for(int i = 0; i<n; i++){
    cin>>c;
    if(c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'o' || c == 'r' || c == 'c' || c == 'e' || c == 's')
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;
   }
}
