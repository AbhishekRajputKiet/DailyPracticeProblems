#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,p,q,c;
	    cin>>a>>b>>p>>q;
	    if(a==p && b==q)
	        cout<<"0"<<endl;
	    else if((a+b)%2==(p+q)%2)
	        cout<<"2"<<endl;
	    else
	        cout<<"1"<<endl;
	}
	return 0;
}