//WAP for Fibonnaci Number
// 0 1 1 2 3 5 8 13 21 34
#include <iostream>
using namespace std;
int fib(int n) {
    // if(n == 0) return 0;
    // if(n == 1) return 1;
    if(n == 0 || n == 1) return n;
    return fib(n-1) + fib(n-2);
}
int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << fib(n);
    return 0;
}