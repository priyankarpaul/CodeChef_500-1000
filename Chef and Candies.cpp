#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(n<x) cout<<0<<endl;
	    else if ((n-x)%4 == 0) cout << (n-x)/4 << "\n";
        else cout << ((n-x)/4)+1 << "\n";
	}

}
