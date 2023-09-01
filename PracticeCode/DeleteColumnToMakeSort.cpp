#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int c=0;
        for(int i=0;i<strs[0].size();i++){
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]<strs[j-1][i]){
                    c++;
                    break;
                }
            }
        }
        return c;
    }
};

int main(){
    Solution ob;
    vector<string>strs = {"cba","daf","ghi"};
    cout<<ob.minDeletionSize(strs)<<endl;

    return 0;
}
//  https://leetcode.com/problems/delete-columns-to-make-sorted/description/