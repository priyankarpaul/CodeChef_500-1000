#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int x,y;
    cin>>x>>y;
    int coins=x*y;
    if(coins<100) cout<<0<<endl;
    else cout<<coins/100<<endl;
    }
}