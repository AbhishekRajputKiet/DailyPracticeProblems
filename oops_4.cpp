#include<bits/stdc++.h>
using namespace std;
class student{
    
    int roll_num;
    string name;
    public:
        void setStudent(void){
            //name="Abhishek Rajput";
            cout<<"Enter the name of student is : "<<endl;
            cin>>name;
            
            cout<<"Enter the roll Number of student : "<<endl;
            roll_num=7;
        }

        void getStudent(void){
            cout<<"The roll number of student is : "<< roll_num<<endl;
        }
        

};
int main(){
    
    //cout<<"Inside the main function"<<endl;
    student abhi;
        abhi.setStudent();
        abhi.getStudent();
        return 0;
}