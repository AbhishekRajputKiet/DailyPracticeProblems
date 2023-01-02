#include<bits/stdc++.h>
using namespace std;
int getSum(int* arr,int n){
    int sum=0;
    for(int i=0;i<n;i++)
        sum += arr[i];
    return sum;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    
    int* arr = new int[n];
    cout<<"Enter array element : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int S=getSum(arr,n);
    cout<<"Answer is : "<<S<<endl;
    return 0;
}