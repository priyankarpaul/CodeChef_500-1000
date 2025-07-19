#include <iostream>
using namespace std;

int main() {
    int n, m, t;
    cin>>t;
    
    while (t>0){
        cin>>n>>m;
        if (m==0) cout<<2*n<<endl;
        else if (n>m) cout<<(n-m)+n<<endl;
        else cout<<n<<endl;
        
        t--;
    }
	return 0;
}