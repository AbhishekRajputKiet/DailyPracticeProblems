#include<bits/stdc++.h>
using namespace std;
void towerofHanoi(int n,char s,char d,char h){
    if(n==0)
        return ;
    towerofHanoi(n-1,s,h,d);
    cout<<"Move one from "<<s<<" to "<<d<<endl;
    towerofHanoi(n-1,h,d,s);
}
int main(){
    towerofHanoi(3,'A','C','B');
    return 0;
}