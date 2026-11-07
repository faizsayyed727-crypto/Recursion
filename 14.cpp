//PRE IN POST
#include <iostream>
using namespace std;
void preInpost(int n) {
    if(n == 0) return;
    cout << "Pre " << n << endl;
    preInpost(n - 1);
    cout << "In " << n << endl;
    preInpost(n - 1);
    cout << "Post " << n << endl;
}
int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    preInpost(n);
    return 0;
}