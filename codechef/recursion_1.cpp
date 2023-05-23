#include<bits/stdc++.h>
using namespace std;
int powsum(int n,int m){
    if(m==0)
        return 1;
    return n* powsum(n,m-1);
}
int main(){
    int n,m;
    cout<<"Enter two number ";
    cin>>n>>m;
    cout<<"powsum of n digits is "<<endl;
    cout<<powsum(n,m)<<endl;
    return 0;
}