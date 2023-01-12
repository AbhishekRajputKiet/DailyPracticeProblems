#include<bits/stdc++.h>
using namespace std;

bool ArrayIsSorted(int *arr,int size){
    if(size==1,size==0)
        return true;
    if(arr[0]>arr[1])
        return false;
    else{
        bool remaningpart=ArrayIsSorted(arr+1,size-1);
        return remaningpart;
    }

}

int main(){
    int size=6,arr[6]={2,4,8,9,23,25};
    
    bool ans=ArrayIsSorted( arr, size);
    if(ans)
        cout<<"Array is sorted"<<endl;
    else
        cout<<"Array is not sorted"<<endl;
    return 0;
}