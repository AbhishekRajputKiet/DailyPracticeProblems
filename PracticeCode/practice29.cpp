#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    if(b==0)
        return 1;
    if(b==1)
        return a;
    int ans = power(a,b/2);
    // If b is even
    if(b%2==0)
        return ans * ans;
    // If b is odd
    else
        return a * ans * ans;
    
}
int main(){
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    int ans=power(a,b);
    cout<<"Answer is : "<<ans<<endl;
    
    return 0;
}