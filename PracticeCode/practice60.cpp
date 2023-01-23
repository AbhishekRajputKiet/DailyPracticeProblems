#include<bits/stdc++.h>
using namespace std;
int kadanes(vector<int>&ans){
    int sum=0,maxsum=0;
    for(int i=0;i<ans.size();i++){
        sum=sum+ans[i];
        maxsum=max(maxsum,sum);
        if(sum<0)
            sum=0;
    }
    return maxsum;
}


int main(){
    vector<int>ans;
    ans.push_back(8);
    ans.push_back(-8);
    ans.push_back(9);
    ans.push_back(-9);
    ans.push_back(10);
    ans.push_back(-11);
    ans.push_back(12);
    cout<<kadanes(ans);
    return 0;
}