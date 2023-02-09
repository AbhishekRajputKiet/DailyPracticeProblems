#include<bits/stdc++.h>
using namespace std;
void printv(vector<int>&v){
    cout<<"Size of vector "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    v.push_back(8);
    cout<<"\n";
}
int main(){
    vector<int>v;
    v.push_back(7);
    v.push_back(6);
    printv(v);
    vector<int>&v2=v;// O(n)
    v2.push_back(5);
    printv(v);
    printv(v);
    printv(v2);
    return 0;
}