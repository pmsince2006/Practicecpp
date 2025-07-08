#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if(ch>'a'&&ch<'z'){
        cout << "Entered chaaracter is a alphabet";
    }
    else if(ch>'0'&&ch<'9'){
        cout << "Entered character is a number";
    }
    else{
        cout << "Entered character is a special character";
    }
    return 0;
}
