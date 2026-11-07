//Taylor Series of e^x
//Using Factorial and Power Function
#include <iostream>
using namespace std;
int fact(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}
int power(int x, int n) {
    int p = 1;
    for(int i = 1; i <= n; i++) p = p * x;
    return p;
}
double taylor(int x, int n) {
    double sum = 1;
    for(int i = 1; i < n; i++) {
        sum = sum + (double)power(x, i) / fact(i);
    }
    return sum;
}
int main() {
    int x, n;
    cout << "Enter x (Value of Exponent) : ";
    cin >> x;
    cout << "Enter n (Number of terms) : ";
    cin >> n;
    cout << "e" << "^" << x << " = " << taylor(x, n);
    return 0;
}