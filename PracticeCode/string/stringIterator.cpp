#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="Abhishek Rajptu";
    string :: iterator it;
    for(it=str.begin();it!=str.end();it++)
        cout<<*it;
    
    cout<<endl;
    string :: reverse_iterator it1;
    for(it1=str.rbegin();it1!=str.rend();it1++){
        if(*it1==' ')
            continue;
        cout<<*it1;
    }
    
    cout<<endl;
    
    return 0;
}