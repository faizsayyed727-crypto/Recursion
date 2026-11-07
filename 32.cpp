//Tower of Hanoi
#include<iostream>
using namespace std;
void towerOfHanoi(int n, char src, char help, char des) {
    if(n == 0) return;
    towerOfHanoi(n - 1, src, des, help);
    cout << "Move disk " << n << " from " << src << " to " << des << endl;
    towerOfHanoi(n - 1, help, src, des);
}
int main() {
    int n;
    cout << "Enter number of disks : ";
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}