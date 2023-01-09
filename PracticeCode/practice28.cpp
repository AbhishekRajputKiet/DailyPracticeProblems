#include<bits/stdc++.h>
using namespace std;
bool checkPal(string &str,int s,int e){
    if(s>e)
        return true;
    if(str[s]!=str[e])
        return false;
    else
        return checkPal(str,s+1,e-1);
    
}

int main(){
    string str="abhishek";
    bool isPal = checkPal(str,0,str.length()-1);
    if(isPal)
        cout<<"String is palindrom";
    else
        cout<<"String is not palindrom";

    return 0;
}