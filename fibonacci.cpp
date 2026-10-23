
#include <iostream>
using namespace std;

int main() {
    int n;
    long long first = 0, second = 1, next;

    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number of terms.";
        return 0;
    }

    if (n > 93) {
        cout << "Please enter a number between 1 and 93.";
        return 0;
    }

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;

    return 0;
}