#include <iostream>
#include <string>
using namespace std;
class student {
public:
    string name;
    int roll;
};
int main() {
    student s1;
    s1.name = "Prince";
    s1.roll = 606;
    cout << "Name:" << s1.name;
    cout << "Roll No:" << s1.roll;
    return 0;
}