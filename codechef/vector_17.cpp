#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(4);
    cout << "Capacity -> " << v.capacity() << endl;
    cout << "Size -> " << v.size() << endl;
    cout<<"Element at intex 2 -> "<<v.at(2)<<endl;
    cout<<"First element "<<v.front()<<endl;
    cout<<"Last element "<<v.back()<<endl;
    cout<<"Before "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    v.pop_back();
    cout<<"\nAfter"<<endl;
    //cout << "\nSize -> " << v.size() << endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    v.clear();
    cout<<"\nSize after clear is : "<<v.size()<<endl;
    cout<<"Capacity after clear is: "<<v.capacity()<<endl;
    return 0;
}