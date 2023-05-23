#include<bits/stdc++.h>
using namespace std;
void num(int n){
    if(n<1)
        return ;
    cout<<n<<endl;
    num(n-1);
}
int main(){
    int n;
    cin>>n;
    num(n);

    
    return 0;
}