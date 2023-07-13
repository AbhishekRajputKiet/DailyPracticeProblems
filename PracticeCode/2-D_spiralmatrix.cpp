#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int row_start=0,row_end=n-1,colum_start=0,colum_end=m-1;
    while(row_start<=row_end && colum_start<=colum_end){
        // row_start
        for(int col=colum_start;col<=colum_end;col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        // col_end
        for(int row=row_start;row<=row_end;row++){
            cout<<arr[row][colum_end]<<" ";
        }
        colum_end--;
        // row_end
        for(int col=colum_end;col>=colum_start;col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;
        // col_start
        for(int row=row_end;row>=row_start;row--){
            cout<<arr[row][colum_start]<<" ";
        }
        colum_start++;
    }
    return 0;

}