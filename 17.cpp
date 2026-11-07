//Fibonacci using Memoization
#include <iostream>
using namespace std;
int F[100];
int fib(int n) {
    if(n <= 1) {
        F[n] = n;
        return n;
    }
    if(F[n-2] == -1) F[n-2] = fib(n-2);
    if(F[n-1] == -1) F[n-1] = fib(n-1);
    F[n] = F[n-2] + F[n-1];
    return F[n];
}
int main() {
    int n , i;
    cout << "Enter a Number: ";
    cin >> n;
    for(i = 0; i < 100; i++) F[i] = -1;
    cout << "Fibonnaci of " << n << " = " << fib(n);
    return 0;
}