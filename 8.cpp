//Parametrized Way
#include <iostream>
using namespace std;
void power(int a, int b, int ans) {
    if(b == 0) {
        cout << "Answer = " << ans;
        return;
    }
    power(a, b - 1, ans * a);
}
int main() {
    int a, b;
    cout << "Enter Base: ";
    cin >> a;
    cout << "Enter Power: ";
    cin >> b;
    power(a, b, 1);
    return 0;
}