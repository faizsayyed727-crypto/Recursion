//Maze Path
//Solving with 4 parameters.
#include<iostream>
using namespace std;
int maze(int cr,int cc,int er,int ec){
    int rightWays = 0,downWays = 0;
    if(cr == er && cc == ec) return 1;
    if(cr == er){ //rightWays call
        rightWays = maze(cr,cc + 1,er,ec);
    }
    if(cc == ec){ //downWays
        downWays = maze(cr + 1,cc,er,ec);
    }
    if(cr < er && cc < ec){ //BothWays
        rightWays = maze(cr,cc + 1,er,ec);
        downWays = maze(cr + 1,cc,er,ec);
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
    int ways = maze(1,1,n,m);
    cout << "Number of Ways Possible : " << ways;
}