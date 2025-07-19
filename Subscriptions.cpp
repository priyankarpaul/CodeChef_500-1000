#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int x;
	    cin>>n>>x;
	    int cnt=n/6;
	    if(n%6!=0) cnt++;
	    cout<<cnt*x<<endl;
	}
	return 0;
}
