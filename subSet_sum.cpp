#include<bits/stdc++.h>
using namespace std;
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void func(int i,int sum,int N,vector<int>&arr,vector<int>&sumSubset){
        if(i==N){
            sumSubset.push_back(sum);
            return ;
        }
        //Pick the element
        func(i+1,sum+arr[i],N,arr,sumSubset);
        //Not pick element
        func(i+1,sum,N,arr,sumSubset);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>sumSubset;
        func(0,0,N,arr,sumSubset);
        sort(sumSubset.begin(),sumSubset.end());
        return sumSubset;
        // Write Your Code here
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}