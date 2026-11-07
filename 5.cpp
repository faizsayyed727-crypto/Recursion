//Sum of 1 to n.        (parametrized way)
#include <iostream>
using namespace std;
void sum(int n, int s) {
    if(n == 0) {
        cout << "Sum = " << s;
        return;
    }
    sum(n - 1, s + n);
}
int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    sum(n, 0);
    return 0;
}