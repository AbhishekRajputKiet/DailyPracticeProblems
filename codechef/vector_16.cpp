#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int,4>a={1,2,3,4};
    int size=a.size();
    cout<<size<<endl;
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
    cout<<"\nElement at index "<<a.at(2)<<endl;
    cout<<"First element "<<a.front()<<endl;
    cout<<"Last element "<<a.back()<<endl;
    cout<<"Empty or not-> "<<a.empty();
    return 0;
}