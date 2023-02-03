#include<bits/stdc++.h>
using namespace std;
int main(){
    // merge two sorted array
    int a[]={1,3,5,7};
    int b[]={2,4,6,8};
    int n=sizeof(a)/sizeof(int);
    int m = sizeof(b)/sizeof(int);
    int c[n+m];
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<n){
        c[k++]=a[i++];
    }
    while(j<m){
        c[k++]=b[j++];
    }
    for(int i=0;i<(n+m);i++){
        cout<<c[i]<<" ";
    }
    return 0;
}