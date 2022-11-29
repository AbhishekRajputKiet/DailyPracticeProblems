#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Ente the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum += i;
        }
    }
    cout<<"Sum of prime number is : "<<sum;

    return 0;
}