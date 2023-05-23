#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>maxi;
    priority_queue<int , vector<int> , greater<int> > mini;
    maxi.push(1);
    maxi.push(5);
    maxi.push(7);
    maxi.push(2);
    cout<<"Size of maxi is -> "<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(1);
    mini.push(5);
    mini.push(7);
    mini.push(2);
    cout<<"Size of mini is -> "<<mini.size()<<endl;
    int p=mini.size();
    for(int i=0;i<p;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<"Is impty or not -> "<<mini.empty()<<endl;
    return 0;
}