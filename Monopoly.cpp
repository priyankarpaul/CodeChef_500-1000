#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	 vector<int> profit(4);
	 for(int i=0;i<4;i++) cin>>profit[i];
	 sort(profit.begin(),profit.end());
	 int largest=profit[3];
	 int sum=profit[0]+profit[1]+profit[2];
	 if(sum<largest) cout<<"YES"<<endl;
	 else cout<<"NO"<<endl;
}
}