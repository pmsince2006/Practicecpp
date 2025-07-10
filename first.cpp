// #include<iostream>
// using namespace std;
// int main(){
//     cout << "Help World";
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int x;
//     cin >> x;
//     if(x%2 == 0){
//         cout<<"even";
//     }
//     else if(x%2!=0){
//         cout<<"odd";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int x;
//     int count = 0;
//     cin >> x;
//     for(int i=2;i<x;i++){
//         if(x%i==0){
//             count++;
//         }
//     }
//     if(count == 0){
//         cout << "Prime Number";
//     }
//     else{
//         cout << "Not Prime";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char op;
//     int x,y;
//     cout << "Enter operation: ";
//     cin >> op;
//     cout << "Enter operands: ";
//     cin >> x;
//     cin >> y;
//     switch (op)
//     {
//     case '+':
//         cout << "Result: " << x+y;
//         break;
//     case '-':
//         cout << "Result: " << x-y;
//         break;
//     case '*':
//         cout << "Result: " << x*y;
//         break;
//     case '/':
//         cout << "Result: " << x/y;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout << "Enter the numbers: ";
    cin >> x >> y >> z;
    if((x > y)&&(x > z)){
        cout << "Greatest: " << x;
    }
    else if((y > x)&&(y > z)){
        cout << "Greatest: " << y;
    }
    else{
        cout << "Greatest: " << x;
    }
    return 0;
}