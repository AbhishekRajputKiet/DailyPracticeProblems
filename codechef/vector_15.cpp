#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int c=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]==1)
	            c++;
	    }
	    
	    if(c%2!=0)
	        cout<<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
	}
	return 0;
}
