
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cout <<"Enter the number: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    cout<<sum;
    return 0;
}