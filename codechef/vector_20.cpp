#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l;
    l.push_back(9);
    l.push_front(6);
    l.push_back(1);
    l.push_front(3);
    list<int>p(l);
    cout<<"Print copy list "<<endl;
    for(int i:p)
        cout<<i<<" ";
    cout<<"\n";
    for(int i:l)
        cout<<i<<" ";
    cout<<"\nSize of list : "<<l.size()<<endl;
    l.erase(l.begin());
    for(int i:l)
        cout<<i<<" ";
    cout<<"\nEmpty or not : "<<l.empty()<<endl;
    return 0;
}