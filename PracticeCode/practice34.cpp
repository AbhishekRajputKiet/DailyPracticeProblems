#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    int health;
    char level;

    void print(){
        cout<<level<<endl;
    }
};
int main(){
    // create of object;
    Hero ramesh;
    ramesh.health =20;
    ramesh.level='A';

    cout<<"health is : "<<ramesh.health<<endl;
    cout<<"level is : "<<ramesh.level<<endl;
    
    return 0;
}