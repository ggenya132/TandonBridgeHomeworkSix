#include <iostream>
using namespace std;

// Authors note: to truly make this efficient and a run time of O(n), we can
// memoize with a vector

double eApprox(int n) {
    double sum = 1.0;
    double factorial = 1.0;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += (1.0 / factorial);
    }
    return sum;
}

int main() {
    cout.precision(30);
    for (int n = 1; n <= 15; n++) {
        cout << "n = " << n << '\t' << eApprox(n) << endl;
    }
    return 0;
}