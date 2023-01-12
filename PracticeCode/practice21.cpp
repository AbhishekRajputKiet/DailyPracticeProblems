#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=1,c;
    cout<<"Print till : ";
    cin>>n;
    if(n==1)
        cout<<a;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n-2;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}