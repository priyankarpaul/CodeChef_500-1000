#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
	if(n%3==0) cout<<"NORMAL"<<"\n";
	else if(n%3==1) cout<<"HUGE"<<"\n";
	else cout<<"SMALL"<<"\n";
}
}
