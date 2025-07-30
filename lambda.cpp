// #include<iostream>
// using namespace std;
// int main(){
//     auto add = [](int a,int b){ return a + b;};
//     cout << add(2,3) << endl;
// }

// #include<iostream>
// using namespace std;
// int add(int a,int b){
//     int c = a + b;
//     return c;
// }
// int main(){
//     int result = add(2,3);
//     cout << result;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5, b = 7;
//     int c = a+b;
//     auto sum = [=](){cout << c << endl;}; //call by value
//     sum();
//     auto inc = [&](){c++;};//call by refrence
//     inc();
//     cout << c << endl;
// }

// #include<iostream>
// #include<functional>
// using namespace std;
// void two(function<void()> func){
//     func();
//     func();
// }
// int main(){
//     auto greet = [](){cout << "Help World\n";};
//     two(greet);
//     return 0;
// }

// #include<iostream>
// #include<functional>
// using namespace std;
// int sq(int a){
//     int c = a*a;
//     return c;
// }
// int main(){
//     int result = sq(6);
//     cout << "Square is: "<< result;
//     return 0;
// }


#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 4, 5, 6, 7, 8};
    auto printEven = [](int num) {
        if (num % 2 == 0)
            cout << num << " ";
    };
    for (int num : arr) {
        printEven(num);
    }
    return 0;
}

