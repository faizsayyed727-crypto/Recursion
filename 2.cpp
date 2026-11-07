//Factorial using Parameterized Way
#include <iostream>
using namespace std;
void factorial(int n, int ans) {
    if(n == 0) {
        cout << "Factorial = " << ans;
        return;
    }
    factorial(n - 1, ans * n);
}
int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    factorial(n, 1);
    return 0;
}