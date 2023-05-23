#include<bits/stdc++.h>
using  namespace std;
class abhishek{
    private :
        int a,b,c;
    public :
        int d,e;
    void setData(int a1,int b1,int c1);
    void getData(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
        cout<<"The value of d is : "<<d<<endl;
        cout<<"The value of e is : "<<e<<endl;
    }

    
};
void abhishek :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;

}
int main(){
    abhishek verma;
    verma.d=23;
    verma.e=34;
    verma.setData(2,4,1);
    verma.getData();
    return 0;
}
