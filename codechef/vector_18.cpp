#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,q;
    cin>>p>>q;
    vector<int>a(p,q);
    vector<int>list(a);
    for(int i:list)
        cout<<i<<" ";
    return 0;
}