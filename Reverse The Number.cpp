#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int r=0;
        while(n!=0){
            r=n%10+r*10;
            n=n/10;
        }
        cout<<r<<endl;
    }
}
