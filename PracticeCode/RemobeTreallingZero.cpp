#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeTrailingZeros(string num) {
        int n=num.length()-1;
        while(n>=0 && num[n]=='0')
            n--;
        return num.substr(0,n+1);
    }
};

int main(){

    Solution ob;
    string num = "51230100";
    string ans=ob.removeTrailingZeros(num);
    for(int i=0;i<ans.length();i++)
        cout<<ans[i];
    cout<<endl;
}
//  https://leetcode.com/problems/remove-trailing-zeros-from-a-string/description/