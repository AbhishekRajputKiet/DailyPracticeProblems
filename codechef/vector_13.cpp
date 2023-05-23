#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string>q;
    q.push("abc");
    q.push("ald");
    q.push("cad");
    q.push("dap");
    q.push("uar");
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}