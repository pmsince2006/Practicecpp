#include <iostream>
using namespace std;
int main() {
    int num;
    bool Prime = true;
    cout << "Enter a number: ";
    cin >> num;
    if (num <= 1) {
        Prime = false;
    } 
    else {
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                Prime = false;
                break;
            }
        }
    }
    if (Prime)
        cout << "It is a prime number" << endl;
    else
        cout <<"It is not a prime number.";
    return 0;
}