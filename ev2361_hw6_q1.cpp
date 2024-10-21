#include <iostream>
#include <map>

using namespace std;

map<int, int> fib_cache;
int fib(int n) {
    // memoize
    if (fib_cache.find(n) != fib_cache.end()) {
        return fib_cache[n];
    }
    if (n <= 2) {
        return 1;
    }
    fib_cache[n] = fib(n - 1) + fib(n - 2);

    return fib_cache[n];
}

int main() {
    int input;
    cout << "Please enter a positive interger:";
    cin >> input;
    cout << fib(input);
    return 1;
}
