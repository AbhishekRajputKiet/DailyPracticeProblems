# include<bits/stdc++.h>
using namespace std;
class employee{
    int salary;
    int id;
    public:
        void setid(void){
            salary=100;
            cout<<"Enter the id of the employe is : "<<endl;
            cin>>id;

        }
        void getid(void){
            cout<<"Id of the employ is : "<<id<<endl;
        }
};


int main(){
    employee fi[100];
    for(int i=0;i<4;i++){
        fi[i].setid();
        fi[i].getid();
    }
}