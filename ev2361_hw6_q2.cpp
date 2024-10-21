#include <iostream>
using namespace std;
const char SPACE = ' ';
void printShiftedTriangle(int n, int m, char symbol) {
    int numberOfSymbol = 1;
    int numberOfStartingSpaces = (m + n) - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < numberOfStartingSpaces; j++) {
            cout << SPACE;
        }
        for (int z = 0; z < numberOfSymbol; z++) {
            cout << symbol;
        }
        numberOfSymbol += 2;
        numberOfStartingSpaces--;
        cout << endl;
    }
}

void printPineTree(int n, char symbol) {
    int numberOfStartingMargin = n;
    for (int i = 0; i < n; i++) {
        printShiftedTriangle(i + 2, numberOfStartingMargin - 1, symbol);
        numberOfStartingMargin--;
    }
}
int main() {
    char desiredCharacter;
    int numberOfTriangles = 0;
    cout << "Please enter the amount of triangles in the pine tree: ";
    cin >> numberOfTriangles;
    cout << "Please enter character you would like to see printed: ";
    cin >> desiredCharacter;

    printPineTree(numberOfTriangles, desiredCharacter);
    return 1;
}