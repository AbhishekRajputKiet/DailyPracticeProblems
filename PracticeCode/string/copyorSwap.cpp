#include<bits/stdc++.h>
using namespace std;


int main(){
    string str1="Abhishek Rajpt";
    string str2="Abhishek";
    char ch[80];
    str1.copy(ch,8,0);
    cout<<"character array : "<<ch<<endl;
    cout<<"String 1 after character array : "<<str1<<endl;
    cout<<"String 2 after character array: "<<str2<<endl;
    str1.swap(str2);
    cout<<"String 1 after swap array : "<<str1<<endl;
    cout<<"String 2 after swap array: "<<str2<<endl;

    return 0;
}