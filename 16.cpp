//Combination using Recursion
#include<iostream>
using namespace std;
int combination(int n,int r){
    if(r == 0 || r == n) return 1;
    else return combination(n-1,r-1) + combination(n-1,r);
}
int main() {
    int n, r;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter r : ";
    cin >> r;
    int ans = combination(n,r);
    cout << n << "C" << r << " = " << ans;
    return 0;
}