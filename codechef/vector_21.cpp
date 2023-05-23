#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<string>s;
    s.push("Abhishek");
    s.push("kumar");
    s.push("Rajput");
    cout<<"Top element -> "<<s.top()<<endl;
    s.pop();
    cout<<"Top element after pop -> "<<s.top()<<endl;
    cout<<"Empty or not -> "<<s.empty()<<endl;
    cout<<"Size of stack-> "<<s.size()<<endl;
    return 0;
}