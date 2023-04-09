#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
        a[i]=arr[l+i];
    for(int i=0;i<n2;i++)
        b[i]=arr[m+1+i];
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2 ){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;
            i++;
        }
        else{
            arr[k]=b[j];
            k++;
            j++;
        }    

    }
    while(i<n1){
        arr[k]=a[i];
            k++;
            i++;
    }
    while(j<n2){
        arr[k]=b[j];
            k++;
            j++;
    }
}
void Mergesort(int arr[],int l,int r){
    if(l<r){
        int m=(l+r)/2;
        Mergesort(arr,l,m);
        Mergesort(arr,m+1,r);
        Merge(arr,l,m,r);
    }

}
int main(){
    int arr[]={5,4,3,2,1};
    Mergesort(arr,0,4);
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}