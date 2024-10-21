#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int divisorInput;
    cout << "Please enter a positive integer >= 2:";
    cin >> divisorInput;
    int currentGreatestDivisor = 1;
    const char SPACE = ' ';
    vector<int> smallIntegers;
    vector<int> largeIntegers;
    while (currentGreatestDivisor <= sqrt(divisorInput)) {
        if (divisorInput % currentGreatestDivisor == 0) {
            smallIntegers.push_back(currentGreatestDivisor);
            if (divisorInput / currentGreatestDivisor !=
                currentGreatestDivisor) {
                         largeIntegers.push_back(divisorInput / currentGreatestDivisor);
            }
        }
        currentGreatestDivisor++;
    }
    for (int smallestInteger : smallIntegers) {
        cout << smallestInteger << SPACE;
    }
    for (int i = largeIntegers.size() - 1; i >= 0; i--) {
        cout << largeIntegers[i] << SPACE;
    }
}