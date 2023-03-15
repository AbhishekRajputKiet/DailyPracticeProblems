#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(3);
    s.insert(7);
    s.insert(2);
    s.insert(2);
    s.insert(9);
    s.insert(0);
    s.insert(0);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    for(int i:s)
        cout<<i<<endl;
    s.erase(s.begin());
    cout<<"Set after erase is "<<endl;
    for(int i:s)
        cout<<i<<endl;

    return 0;
}