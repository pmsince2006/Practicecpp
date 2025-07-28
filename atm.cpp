#include <iostream>
using namespace std;
int main(){
    int stored = 1234;
    int pin;
    int attempt = 3;
    for(int i = 1;i<=4;i++){
    cout << "Enter 4 digit pin: ";
    cin >> pin;
    if(pin == stored){
        cout << "Pin Accepted, Thankyou sir";
        break;
    }
    else if(pin != 0){
        attempt = attempt-1;
        cout << "Incorrect pin" << endl;
        cout << attempt << "attempts left" << endl;
    }
    else if(attempt==0){
        cout << "Account locked";
        break;
    }
}
    return 0;
}