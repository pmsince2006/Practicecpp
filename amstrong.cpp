#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    int original = x;
    int count=0;
    int digit;
    int temp = x;
    int sum = 0;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    temp = x;
    while ( temp!= 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    if(sum == x){
        cout << "It is a armstrong number";
    }
    else{
        cout << "It is not a armstrong number";
    }
    return 0;
}

