#include <iostream>

void PrintDiamond(int iSide) {
    using namespace std;
    int iSpaces = iSide;
    int iAsterisks = 1;
    // Output the top half of the diamond
    for (int iI = 0; iI < iSide; ++iI) {
        for (int iJ = 0; iJ < iSpaces; ++iJ) {
            cout << " ";
        }
        for (int iJ = 0; iJ < iAsterisks; ++iJ) {
            cout << "*";
        }
        cout << endl;
        --iSpaces;
        iAsterisks += 2;
    }
    // Output the bottom half of the diamond
    for (int iI = 0; iI <= iSide; ++iI) {
        for (int iJ = 0; iJ < iSpaces; ++iJ) {
            cout << " ";
        }
        for (int iJ = 0; iJ < iAsterisks; ++iJ) {
            cout << "*";
        }
        cout << endl;
        ++iSpaces;
        iAsterisks -= 2;
    }
}

int main()
{
    // Print a diamond with side = 5
    PrintDiamond(5);

    return 0;
}