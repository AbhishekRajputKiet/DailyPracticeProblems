#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int c=0;
	    for(int i=0;i<n-2;i++){
	        if(s.at(i)=='0' && s.at(i+1)=='1')
	            c++;
	    }
	    
	    if(s.at(0)=='1')
	        c++;
	    if(s.at(n-2)=='0')
	        c++;
	    cout<<c<<endl;
	    
	}
	return 0;
}
