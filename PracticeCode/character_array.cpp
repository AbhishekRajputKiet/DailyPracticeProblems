#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[100]="abhishek";
    int i=0;
    while(arr[i] != '\0'){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;

    cout<<"Enter user input : ";
    int n;
    cin>>n;
    char nums[n];
    cin>>nums;
    cout<<nums[2]<<endl;

    return 0;
}