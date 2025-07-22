#include<iostream>
using namespace std;
int main(){
    float faren, celsius;
    cout << "Enter temperature in celsius: ";
    cin >> celsius;
    faren = (celsius * 9/5) + 32;
    cout << "The temperature in fareheit is: " << faren;
    return 0;
}