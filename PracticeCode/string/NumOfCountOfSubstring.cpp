#include<iostream>
using namespace std;
int substring(string s1,string s2){
    int count=0;
    for(int i=0;i<s1.length();i++){
        string s3;
        for(int j=i;j<s1.length();j++){
            s3=s3+s1[j];
            if(s2.find(s3)!=1)
                count++;
        }
    }
    return count;
}
int main()
{
    string s1="aab",s2="aaaab";
    cout<<substring(s1,s2)<<endl;
    return 0;
}
