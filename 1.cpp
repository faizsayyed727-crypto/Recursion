// Factorial Using Recursion
#include <iostream>
using namespace std;
int factorial(int n) {
    if(n <= 1) return 1;
    else return n * factorial(n - 1);
}
int main() {
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    cout << "Factorial of the Number is " << factorial(n);
    return 0;
}