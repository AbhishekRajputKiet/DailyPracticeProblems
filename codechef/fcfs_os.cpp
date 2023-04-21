    // ABHISHEK RAJPUT
    // 2100290120007

#include<bits/stdc++.h>
using namespace std;
void waiting_time(int process[],int bt[],int wt[],int n){
    // waiting time for first process
    wt[0] = 0;
    // loop for calculat for waiting time 
    for(int i=1;i<=n;i++){
        wt[i]=wt[i-1] +bt[i-1];
    }
}
void total_avg_time(int process[],int bt[],int wt[],int tat[],int n){
    // loop for calculate total average time
    for(int i=0;i<n;i++){
        tat[i]=wt[i]+bt[i];
    }
}
void avg_tat(int process[],int bt[],int n){
    int wt[n],tat[n],total_wt=0,total_tat=0;
    // function for calculate waithing time 
    waiting_time(process,bt,wt,n);
    // function for calculate total average time
    total_avg_time(process,bt,wt,tat,n);

    cout << "Processes  "<< " Burst time  "
         << " Waiting time  " << " Turn around time\n";
    
    for (int  i=0; i<n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << "  " << i+1 << "\t\t" << bt[i] <<"\t  "<< wt[i] <<"\t\t  " << tat[i] <<endl;
    }
    cout << "Average waiting time = "
         << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "
         << (float)total_tat / (float)n;
}
int main(){
    int process[]={1,2,3};
    // take a array for burst_time
    int bt[]={7,6,4};
    int n=3;
    // function for find average time
    avg_tat(process,bt,n);

    return 0;
}