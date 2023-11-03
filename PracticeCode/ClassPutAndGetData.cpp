#include<bits/stdc++.h>
using namespace std;
class student{
    public :
    int Roll_no;
    // Demon process : which is use to execute back ground process 
    void putDataR(int Roll_no){
        this->Roll_no=Roll_no;
    }
    int getDataR(){
        return this->Roll_no;
    }
};


int main(){
    student s1;
    s1.putDataR(54);
    cout<<s1.getDataR()<<endl;    

    return 0;
}