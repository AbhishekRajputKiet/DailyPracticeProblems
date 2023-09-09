#include<bits/stdc++.h>
using namespace std;

void pattern(string s,int n){
    cout<<s<<endl;
    int start=0,end=n-1;
    //  Loop for reverse string
    while(start<end){
        char ch=s[start];
        s[start]=s[end];
        s[end]=ch;
        start++;
        end--;
    }
    start=0,end=n-1;
    // Loof conver for start or end character to "*"
    while(start<end){
        if(end-start >= 1){
            s[end]=s[start]='*';
            cout<<s<<endl;
            start++;
            end--;
        }
    }

}
int main(){
    string str="abhis";
    pattern(str,5);
    return 0;
}