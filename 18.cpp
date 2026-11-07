//Taylor Series of e^x
#include <iostream>
using namespace std;
int main() {
    int x, n;
    double sum = 1, term = 1;
    cout << "Enter x (Value of Exponent) : ";
    cin >> x;
    cout << "Enter n (Number of terms) : ";
    cin >> n;
    for(int i = 1; i < n; i++) {
        term = term * x / i;
        sum = sum + term;
    }
    cout << "e" << "^" << x << " = " << sum;
    return 0;
}
