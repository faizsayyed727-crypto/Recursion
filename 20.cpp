//Taylor Series of e^x using Recursion
#include<iostream>
using namespace std;
int fact(int n) {
    if(n <= 1) return 1;
    return n * fact(n - 1);
}
int power(int x, int n) {
    if(n == 0) return 1;
    return x * power(x, n - 1);
}
double taylor(int x, int n) {
    if(n == 0) return 1;
    return taylor(x, n - 1) + (double)power(x, n) / fact(n);
}
int main() {
    int x, n;
    cout << "Enter x (Value of Exponent) : ";;
    cin >> x;
    cout << "Enter number of terms: ";
    cin >> n;
    cout << "e" << "^" << x << " = " << taylor(x, n - 1);
    return 0;
}