// Indirect Recursion [A <--> B <--> C]
#include<iostream>
using namespace std;
void funB(int); // Function Prototype
void funA(int n) {
    if (n > 0) {
        cout << n << " ";
        funB(n - 1);
    }
}
void funB(int n) {
    if (n > 0) {
        cout << n << " ";
        funA(n / 2);
    }
}
int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    funA(n);
    return 0;
}