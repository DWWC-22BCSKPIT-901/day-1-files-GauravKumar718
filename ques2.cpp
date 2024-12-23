#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer!" << endl;
    } else {
        int digitCount = 0;
        while (n > 0) {
            n /= 10; 
            digitCount++;
        }
        cout << "The total number of digits is: " << digitCount << endl;
    }
    return 0;
}

