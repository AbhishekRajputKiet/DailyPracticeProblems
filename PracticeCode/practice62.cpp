#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,arr[100];
	    cin>>n;
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int c=1;
	    sort(arr,arr+n);
	    for(int i=0;i<n-1;i++){
	        if(arr[i]!=arr[i+1]){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	
	return 0;
}
