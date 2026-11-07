// Maclaurin Series of cosx
// Using Recursion
#include <iostream>
using namespace std;
double cosx(double x, int n, double term) {
    if(n == 0) return term;
    double next = -term * x * x / ((2*n-1) * (2*n));
    return term + cosx(x, n-1, next);
}
int main() {
    double x;
    int n;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter number of terms: ";
    cin >> n;
    cout << "cos(" << x << ") = " << cosx(x, n-1, 1);
    return 0;
}
