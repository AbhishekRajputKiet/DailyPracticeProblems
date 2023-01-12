#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=5;
    int & j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    cout<<j<<endl;
    j++;
    cout<<j<<endl;
    cout<<i<<endl;
    return 0;
}