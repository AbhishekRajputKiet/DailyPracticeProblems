#include<bits/stdc++.h>
using namespace std;
void print(int n,int sum){
    while(n<0){
        cout<<sum;
        return ;
    }
    print(n-1,sum+n);
}
int main(){
    int n;
    cin>>n;
    print(n,0);
    return 0;
}