//Maclaurin Series of sinx
//using recursion
#include <iostream>
using namespace std;
double sinx(double x, int n, double term) {
    if(n == 0) return term;
    double next = -term * x * x / ((2*n) * (2*n+1));
    return term + sinx(x, n-1, next);
}
int main() {
    double x;
    int n;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter number of terms: ";
    cin >> n;
    cout << "sin(" << x << ") = " << sinx(x, n-1, x);
    return 0;
}