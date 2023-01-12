#include<bits/stdc++.h>
using namespace std;

int partation(int *arr,int s,int e){
    int pivot = arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int PivotInd = s+cnt;
    swap(arr[PivotInd],arr[s]);
    int i=s,j=e;
    while(i<PivotInd && j>PivotInd){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<PivotInd && j>PivotInd){
            swap(arr[i++],arr[j--]);
        }
    }
    return PivotInd;
}
void quicksort(int *arr , int s,int e){
    if(s>=e)
        return ;
    int p=partation(arr,s,e);

//sort befor partation
    quicksort(arr,s,p-1);

//sort after partation
    quicksort(arr,p+1,e);

}


int main(){
    int arr[5]={2,3,9,0,1};
    int n=5;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}