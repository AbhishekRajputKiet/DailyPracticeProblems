#include <bits/stdc++.h>
using namespace std;
int main() {
   
    cout<<"winning Rules of the Rock paper and scissor game as follows: \nrock vs paper->paper wins \nrock vs scissors->rock wins \npaper vs scissors->scissors wins "<<endl;
        cout<<"Enter choice \n1. Rock \n2. paper \n3. scissor "<<endl;
        cout<<"****Starting the game****"<<endl;
        cout<<endl;
    int uscore=0,cscore=0;
    while(true){
        label:
        cout<<"Enter you choice : ";
        int choice;
        cin>>choice;
        if(choice>3 || choice<1){
            goto label;
        }
        cout<<"************Now, Its computer's turn***********"<<endl;
        // gnerating random number
        int rndnum = (rand()%3+1);
        // cout<<"computer opt for "<<rndnum<<endl;
        if(rndnum==1 && choice==2){
            // cout<< "*you wins*"<<endl;
            uscore++;
        }
        else if(rndnum==2 && choice==3){
            // cout<<"*you wins*"<<endl;
            uscore++;
        }
        else if(rndnum==3 && choice==1){
            // cout<<"*you wins*"<<endl;
            uscore++;
        }
        else if(rndnum==choice){
            cout<<"There is a tie"<<endl;
        }
        else{
            // cout<<"computer wins"<<endl;
            cscore++;
        }
        cout<<"SCORE BOARD (USER|COMPUTER) : "<<endl;
        cout<<uscore<<"|"<<cscore<<endl;
        cout<<"do you want to contnue or exit the game "<<endl;
        cout<<"press '0' to exit the game "<<endl;
        int n;
        cin>>n;
        if(n==0) break;
    }
    cout<<"Exit Successfully"<<endl;
    return 0;
}