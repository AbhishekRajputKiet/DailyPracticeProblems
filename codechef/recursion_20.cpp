#include<bits/stdc++.h>
using namespace std;
int knapsack(int value[],int weight[],int n,int W){
    if(n==0 || W==0)
        return 0;
    if(weight[n-1]>W)
        return knapsack(value,weight,n-1,W);
    return max(knapsack(value,weight,n-1,W-weight[n-1])+value[n-1],knapsack(value,weight,n-1,W));
}
int main(){
    int weight[]={10,20,30};
    int value[]={100,50,150};
    int W=40;
    cout<<knapsack(value,weight,3,W);
    return 0;
}