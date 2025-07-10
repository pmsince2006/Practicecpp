#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Input from user
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check if the input is valid
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    // Loop to calculate sum
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Output the result
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
