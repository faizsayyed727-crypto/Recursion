//Maclaurin Series of cosx
//using factorial and power function
#include <iostream>
using namespace std;
int main() {
    double x, sum = 0, power, fact;
    int n;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter number of terms: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        power = 1, fact = 1;
        // Calculate power
        for(int j = 1; j <= 2*i; j++) {
            power = power * x;
        }
        // Calculate factorial
        for(int j = 1; j <= 2*i; j++) {
            fact = fact * j;
        }
        if(i % 2 == 0) sum = sum + power / fact;  // even
        else sum = sum - power / fact;  // odd
    }
    cout << "cos(" << x << ") = " << sum;
    return 0;
}
