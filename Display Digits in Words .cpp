#include <iostream>
using namespace std;

int main() {
    int n, r;
    int digits[10]; // Assuming the number has at most 10 digits
    int numDigits = 0;

    cout << "Enter n: ";
    cin >> n;

    while (n != 0) {
        r = n % 10;
        n = n / 10;
        digits[numDigits] = r;
        numDigits++;
    }

    cout << "Digits in words: ";
    for (int i = numDigits - 1; i >= 0; i--) {
        switch (digits[i]) {
            case 0: cout << "zero "; break;
            case 1: cout << "one "; break;
            case 2: cout << "two "; break;
            case 3: cout << "three "; break;
            case 4: cout << "four "; break;
            case 5: cout << "five "; break;
            case 6: cout << "six "; break;
            case 7: cout << "seven "; break;
            case 8: cout << "eight "; break;
            case 9: cout << "nine "; break;
        }
    }
    
    cout << endl;

    return 0;
}
