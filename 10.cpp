// McCarthy 91 Function
// If n <= 100 -> returns 91
// If n > 100 -> returns n - 10
#include <iostream>
using namespace std;
int fun(int n) {
    if(n > 100) return n - 10;
    else return fun(fun(n + 11));
}
int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << fun(n);
    return 0;
}