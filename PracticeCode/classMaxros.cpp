#include<bits/stdc++.h>
using namespace std;
#define TAX 10
class employee{
    public:
    double incometex(double salary){
        return TAX*salary/100;
    }
};
int main(){
    employee ob;
    double salary;
    salary=675000;
    cout<<ob.incometex(salary)<<endl;

    return 0;
}