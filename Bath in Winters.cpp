#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if((2*y)<=x) cout<<x/(2*y)<<"\n";
	    else cout<<0<<endl;
	}

}
