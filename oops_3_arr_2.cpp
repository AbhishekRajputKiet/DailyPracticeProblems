#include<bits/stdc++.h>
using namespace std;
class number{
    int a,b;
    public: 
        void setnum(int v1,int v2){
            a=v1;
            b=v2;
        }
        void printnum(){
            cout<<"Complex number is "<<a<<" + "<<"i"<<b<<endl;
        }
};
int main(){
    number v1,v2;
    v1.setnum(2,5);
    v2.setnum(6,3);
    v1.printnum();
    v2.printnum();
}