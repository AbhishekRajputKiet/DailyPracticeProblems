#include<bits/stdc++.h>
using namespace std;
string remobedup(string s){
    if(s.length() == 0)
        return "";
    char ch = s[0]; 
    string ans= remobedup(s.substr(1));
    if(ch==ans[0])
        return ans;
    return ch+ans;

}
int main(){
    cout<<remobedup("aaaabbcccccddddde")<<endl;
    return 0;
}