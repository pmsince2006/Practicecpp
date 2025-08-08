// #include <iostream>
// class Example {
// private:
// const int value;
// int& ref;
// public:
// Example(int v, int& r) : value(v), ref(r) {
// std::cout << "Const value: " << value  << "Refrence value: "<< ref ;
// }
// };
// int main() {
// int num = 10;
// Example ex(5, num);
// return 0;
// }

// #include <iostream>
// using namespace std;
// class Rectangle {
// private:
//     int width;
//     int height;
// public:
//     Rectangle() {
//         width = 1;
//         height = 1;
//         cout << "Rectangle created with width = " << width << " and height = " << height << endl;
//     }
//     ~Rectangle() {
//         cout << "Rectangle destroyed";
//     }
// };
// int main() {
//     Rectangle rect;
//     return 0;
// }

#include <iostream>
using namespace std;
class circle {
    private:
    int area;
    int rad;
    public:
    circle() {
        rad = 5;
        area = 3.14 * rad * rad;
        cout << "Area of the cricle is: " << area << endl;
    }
};
int main(){
    circle gola;
    return 0;
}