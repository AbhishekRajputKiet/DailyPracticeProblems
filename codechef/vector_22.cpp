#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string>q;

    q.push("Abhishek");
    q.push("Kumar");
    q.push("Rajput");
    cout<<"Front of queue -> "<<q.front()<<endl;
    q.pop();

    cout<<"Front of queue after pop -> "<<q.front()<<endl;
    cout<<"Queue is empty or not -> "<<q.empty()<<endl;
    cout<<"Size of queue is-> "<<q.size()<<endl;
    return 0;
}