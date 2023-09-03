#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]%2!=0)
                return num.substr(0,i+1);
        }
        return "";
    }
};

int main(){
    Solution ob;
    string num = "4206";
    string ans = ob.largestOddNumber(num);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i];
    cout<<endl;
    return 0;
}
//  https://leetcode.com/problems/largest-odd-number-in-string/description/