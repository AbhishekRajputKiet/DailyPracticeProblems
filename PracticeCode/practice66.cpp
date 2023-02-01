#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t ;
	while(t--){
	    int  n,k;
	    int arr[10000];
	    cin>>n>>k;
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    sort(arr,arr+n);
	    double sum=0;
	    for(int i=k;i<n-k;i++)
	        sum+=arr[i];
	    double ans=sum/(n-2*k);
	    cout<<fixed<<setprecision(6)<<ans<<endl;
	}
	return 0;
}
