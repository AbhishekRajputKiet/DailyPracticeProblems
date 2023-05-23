// ABHISHEK RAJPUT
// 2100290120007
// Code for prority scheduling by preemptive approach
#include <bits/stdc++.h>

using namespace std;

#define n 7

// Making a struct to hold the given input

struct process
{
int at,bt,pr,pno;
};

process proc[50];

/*
Writing comparator function to sort according to priority if
arrival time is same
*/

bool comp(process a,process b)
{
if(a.at == b.at)
{
return a.pr<b.pr;
}
else
{
	return a.at<b.at;
}
}

// Using FCFS Algorithm to find Waiting time
void get_wt_time(int wt[])
{
// declaring service array that stores cumulative burst time
int service[50];

// Initialising initial elements of the arrays
service[0] = proc[0].at;
wt[0]=0;


for(int i=1;i<n;i++)
{
service[i]=proc[i-1].bt+service[i-1];

wt[i]=service[i]-proc[i].at;

// If waiting time is negative, change it into zero
	
	if(wt[i]<0)
	{
	wt[i]=0;
	}
}

}

void get_tat_time(int tat[],int wt[])
{
// Filling turnaroundtime array

for(int i=0;i<n;i++)
{
	tat[i]=proc[i].bt+wt[i];
}
	
}

void findgc()
{
//Declare waiting time and turnaround time array
int wt[50],tat[50];
double wavg=0,tavg=0;

// Function  find waiting time
get_wt_time(wt);
//Function find turnaround time
get_tat_time(tat,wt);
	
int stime[50],ctime[50];

stime[0] = proc[0].at;
ctime[0]=stime[0]+tat[0];

// calculate starting and ending time
for(int i=1;i<n;i++)
	{
		stime[i]=ctime[i-1];
		ctime[i]=stime[i]+tat[i]-wt[i];
	}
cout<<"Process_no\tStart_time\tComplete_time\tTurn_Around_Time\tWaiting_Time"<<endl;
	// display the process details
for(int i=0;i<n;i++)
	{
		wavg += wt[i];
		tavg += tat[i];
		
		cout<<proc[i].pno<<"\t\t"<<
			stime[i]<<"\t\t"<<ctime[i]<<"\t\t"<<
			tat[i]<<"\t\t\t"<<wt[i]<<endl;
	}

	cout<<"Average waiting time is : ";
	cout<<wavg/(float)n<<endl;
	cout<<"average turnaround time : ";
	cout<<tavg/(float)n<<endl;

}

int main()
{
int arrivaltime[] = { 0,2,1,4,6,5,7};
int bursttime[] = {3,5,4,2,9,4,10};
int priority[] = {2,6,3,5,7,4,10};
	
for(int i=0;i<n;i++)
{
	proc[i].at=arrivaltime[i];
	proc[i].bt=bursttime[i];
	proc[i].pr=priority[i];
	proc[i].pno=i+1;
	}
	
	//Using sort function	
	sort(proc,proc+n,comp);
	
	//Calling function for finding Gantt Chart	
	findgc();
	return 0;
}
