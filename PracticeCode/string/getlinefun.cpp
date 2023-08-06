#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    //cin>>s;
    getline(cin,s);
    cout<<"Initial string : "<<s<<endl;
    s.push_back('#');
    cout<<"After push operation : "<<s<<endl;
    s.pop_back();
    cout<<"After pop operation : "<<s<<endl;
    string str=s;
    cout<<str<<endl;
    cout<<str.empty()<<endl;
    return 0;
}