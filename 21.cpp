// Taylor Series of e^x using Recursion
#include <iostream>
using namespace std;
double taylor(int x, int n) {
    if(n == 0) return 1;
    return 1 + (double)x / n 
    * taylor(x, n - 1);
}
// double taylor(int x, int n) {
//     static double s = 1;
//     if(n == 0) return s;
//     s = 1 + (double)x / n * s;
//     return taylor(x, n - 1);
// }
// // double taylor(int x, int n) {
// //     double s = 1;
// //     for(;n>0;n--){
// //         s = 1 + (double)x / n * s;
// //     }
// //     return s;
// // }
int main() {
    int x, n;
    cout << "Enter x (Value of Exponent): ";
    cin >> x;
    cout << "Enter number of terms: ";
    cin >> n;
    cout << "e^" << x << " = " << taylor(x, n);
    return 0;
}