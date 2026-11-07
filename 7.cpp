//Function which calculates ‘a’ raised to power ‘b’ using recursion
#include <iostream>
using namespace std;
int power(int a, int b) {
    if(b == 0) return 1;
    return a * power(a, b - 1);
}
int main() {
    int a, b;
    cout << "Enter Base: ";
    cin >> a;
    cout << "Enter Power: ";
    cin >> b;
    cout << "Answer = " << power(a, b);
    return 0;
}