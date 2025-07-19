#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int maxx1=max(a,b);
	    int maxx2=max(c,d);
	    cout<<maxx1+maxx2<<endl;
	}

}
