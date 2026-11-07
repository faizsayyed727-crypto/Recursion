//Maze Path
//Solving with 2 parameters.(ULTA APPROACH).
#include<iostream>
using namespace std;
int maze(int n,int m){
    int rightWays = 0,downWays = 0;
    if(n==1 && m==1) return 1;
    if(n==1){ //down nahi ja sakte
        rightWays += maze(n,m-1);
    }
    if(m==1){
        downWays += maze(n-1,m);
    }
    if(n>1 && m>1){
        rightWays += maze(n,m-1);
        downWays += maze(n-1,m);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main(){
    int n , m;
    cout << "Enter a Number of Rows in the MazePath : ";
    cin >> n;
    cout << "Enter a Number of Columns in the MazePath : ";
    cin >> m;
    int ways = maze(n,m);
    cout << "Number of Ways : " << ways;
}