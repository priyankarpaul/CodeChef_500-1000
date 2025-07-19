#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
	    int x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]>=x) count++;
	    }
	    cout<<count<<endl;
	    
	}

}
