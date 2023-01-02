#include<bits/stdc++.h>
using namespace std;
void update2(int& n){
    n++;
}
void update1(int n){
    n++;
}
int main(){
    int n=5;
    cout<<"Befor : "<<n<<endl;
    update1(n);
    cout<<"After : "<<n<<endl;
    update2(n);
    cout<<"After : "<<n<<endl;
    return 0;
}