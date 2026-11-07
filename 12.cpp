// Tree Recursion: When a function calls itself more than one time.
#include <iostream>
using namespace std;
void fun(int n) {
    if (n > 0) {
        cout << n << " ";
        fun(n - 1);
        fun(n - 1);
    }
}
int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    fun(n);
    return 0;
}