#include<bits/stdc++.h>
using namespace std;

void reached(int str,int dest){
    cout<<"Surse "<<str<<" Destination "<<dest<<endl;
    if(str==dest){
        cout<<"completed"<<endl;
        return;
    }
    str++;
    reached(str,dest);
}

int main(){
    int dest=10,str=1;
    cout<<endl;
    reached(str, dest);

    return 0;
}