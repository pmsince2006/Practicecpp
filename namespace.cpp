// #include <iostream> // Includes code for input/output
// int main() {
// std::cout << "Hello!" << std::endl; 
// return 0;
// }

#include<iostream>
using namespace std;
namespace A {
int val() { return 2; }
}
namespace B {
int val() { return 5; }
}
int main() {
cout << A::val() + B::val() << std::endl;
return 0;
}

 