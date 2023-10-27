#include<bits/stdc++.h>
using namespace std;

class employee{
    public:
    double incometex(double salary){
        int tax;
        if(salary<300000)
            tax= 0;
        else if(salary>=300000 && salary<600000)
            tax=(salary-300000)*0.05;
        else if(salary>=600000 && salary>900000)
            tax=12500+(salary/100)*0.1;
        else
            tax=112500 + (salary-900000)*0.15;
        return tax;
    }
};
int main(){
    employee ob;
    double salary;
    cin>>salary;
    cout<<ob.incometex(salary)<<endl;

    return 0;
}