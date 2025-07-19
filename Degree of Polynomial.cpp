#include <iostream>
using namespace std;

int main(){
	int t,k;
	cin>>t;
	for(int i=0;i<t;i++){
	        int a;
	        int b[1000];
	        cin>>a;
	        for( k=0;k<a;k++){
	             cin>>b[k];
	         }
	         for(int j=a-1;j>=0;j--){
	             if(b[j]!=0){
	             cout<<j<<"\n";
	             break;
                }
            }       
	}  
	return 0;
}
