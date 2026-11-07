//Stair Path --> No. of ways to reach nth stair using 1 or 2 steps.
#include<iostream>
using namespace std;
int stair(int n){
    if(n==0) return 1; //at, ground 1 way is possible
    if(n==1 || n==2) return n; 
    int totalways = stair(n-1) + stair(n-2); //n=3 ke liye iska use hona start hoga
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