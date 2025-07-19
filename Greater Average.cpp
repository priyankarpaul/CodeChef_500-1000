#include <bits/stdc++.h>
using namespace std;

int main() {
	float a,b,c,t,avg;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    avg=(a+b)/2;
	    if(avg>c) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}
