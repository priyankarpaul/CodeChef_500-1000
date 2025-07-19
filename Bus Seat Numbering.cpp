#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n<=10) cout<<"Lower Double"<<endl;
	    if(n>=11 && n<=15) cout<<"Lower Single"<<endl;
	    if(n>=16 && n<=25) cout<<"Upper Double"<<endl;
	    if(n>=26) cout<<"Upper Single"<<endl;
	}

}
