#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(9);
    d.push_back(5);
    d.push_front(3);
    for(int i:d)
        cout<<i<<endl;
    d.pop_back();
    cout<<"after delition from back "<<endl;
    for(int i:d)
        cout<<i<<endl;
    cout<<"Print at index 1 is "<<d.at(1)<<endl;
    cout<<"Element at front "<<d.front()<<endl;
    cout<<"Element at last "<<d.back()<<endl;
    cout<<"Empty or not "<<d.empty()<<endl;
    cout<<"Size is "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After delition size is "<<d.size()<<endl;
    for(int i:d)
        cout<<i<<endl;
    return 0;
}   