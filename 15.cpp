//Permuatation using Recursion
#include <iostream>
using namespace std;
int permutation(int n , int r){
    if(r == 0) return 1;
    return n * permutation(n-1,r-1);
}
int main() {
    int n, r;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter r : ";
    cin >> r;
    int ans = permutation(n,r);
    cout << n << "P" << r << " = " << ans;
    return 0;
}