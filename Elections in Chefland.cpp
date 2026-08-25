#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,i;
	    cin>>n>>x;
	    int a[n],y=0;
	    for (i=0;i<n;i++){
	        cin>>a[i];
	        if (a[i]>=x){
	            y=y+1;
	        }
	    }
	    cout<<y<<endl;
	    
	}
	return 0;

}
