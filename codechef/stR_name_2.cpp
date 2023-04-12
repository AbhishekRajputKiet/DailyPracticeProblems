#include<bits/stdc++.h>
using namespace std;
void num(int i,int n){
    if(i>n)
        return ;
    cout<<i<<endl;
    num(i+1,n);
}
int main(){
    int n;
    cin>>n;
    num(1,n);
    return 0;
}