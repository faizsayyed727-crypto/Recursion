//Maclaurin Series of sinx
//using for loop
#include<iostream>
using namespace std;
int main() {
    double x, sum = 0, term;
    int n;
    cout << "Enter value of x (in radians): ";
    cin >> x;
    cout << "Enter number of terms: ";
    cin >> n;

    term = x;
    for(int i = 1; i <= n; i++) {
        sum = sum + term;
        term = -term * x * x / ((2*i) * (2*i + 1));
    }
    cout << "sin(" << x << ") = " << sum;
    return 0;
}