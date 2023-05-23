#include<bits/stdc++.h>
using namespace std;
int countpathMaze(int n,int i,int j){
    if(i>=(n-1) && j>=(n-1))
        return 1;
    if(i>=n || j>=n)
        return 0;
    return countpathMaze(n,i+1,j)+countpathMaze(n,i,j+1);

}
int main(){
    cout<<countpathMaze(3,0,0);
    return 0;
}