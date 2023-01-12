#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    //base case         
    if(n==0)
        return 1;
    int big = n*factorial(n-1);
    return big;
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int ans=factorial(n);
    cout<<"factorial is: "<<ans<<endl;

    return 0;
}