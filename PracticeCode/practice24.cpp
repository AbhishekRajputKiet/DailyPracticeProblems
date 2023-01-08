#include<bits/stdc++.h>
using namespace std;
int getsum(int *arr , int size){
    if(size==0)
        return 0;
    if(size==1)
        return arr[0];
    return arr[0]+getsum(arr+1,size-1);        
}
int main(){
    int size=6;
    int arr[6]={3,6,9,10,13,70};
    int sum=getsum(arr,size);
    cout<<"Sum is "<<sum<<endl;
    
    return 0;
}