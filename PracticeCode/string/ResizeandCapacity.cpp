#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "Abhishek Rajput";
    cout<<"Initial string : "<<str<<endl;
    cout<<"capacity of string : "<<str.capacity()<<endl;
    cout<<"length of string is : "<<str.length()<<endl;
    str.resize(8);
    cout<<"After resize operation string is : "<<str<<endl;
    cout<<"After resize capacity of string : "<<str.capacity()<<endl;
    cout<<"After resize length of string is : "<<str.length()<<endl;
    str.shrink_to_fit();
    cout<<"After rsrink_to_fit capacity of string : "<<str.capacity()<<endl;
    cout<<"After srink_to_fit length of string is : "<<str.length()<<endl;

    return 0;
}
// each function contain O(n) time complexity

