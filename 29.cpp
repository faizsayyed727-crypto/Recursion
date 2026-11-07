//Stair path --> No.of Ways to reach nth stair using 1 or 2 or 3 steps.
#include<iostream>
using namespace std;
int stair(int n){
    if(n==0) return 1;
    if(n==1 || n==2) return n;
    int totalways = stair(n-1) + stair(n-2) + stair(n-3);
    return totalways;
}
int main(){
    int n;
    cout << "Enter Number of Stairs : ";
    cin >> n;
    int ways = stair(n);
    cout << "Total Number of possible ways to reach nth stair with either 1 step or 2 step is : " << ways;
    return 0;
}