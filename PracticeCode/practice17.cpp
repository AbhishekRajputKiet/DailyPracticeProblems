#include<bits/stdc++.h>
using namespace std;
int getmax(int& a,int& b){
    return (a>b) ? a:b;
}

int main(){
    int a=1,b=2;
    int ans=0;
    ans=getmax(a,b);
    cout<<"max is : " <<ans<<endl;
    a=a+3;
    b=b+1;
    ans=getmax(a,b);
    cout<<"max is : " <<ans<<endl;
    return 0;
}