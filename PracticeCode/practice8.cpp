#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string>q;
    q.push("jsk");
    q.push("usi");
    q.push("opw");
    q.push("yui");
    q.push("wuq");
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}