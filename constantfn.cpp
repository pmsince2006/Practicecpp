// #include<iostream>
// using namespace std;
// class Point {
//     int x, y;
// public:
//     Point(int a, int b): x(a), y(b) {}
//     int getX() const { return x; }  
//     void setX(int val) { x = val; }
// };
// int main() {
//     const Point p1(10, 20); 
//     cout << "X: " << p1.getX();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class student{
//     string name;
//     int getlength(){
//         return name.length();}
// };
// int main(){
//     student s = {"Prince"};
//     cout << s.getlength();
//     return 0;
// }

#include <iostream>
using namespace std;
class Box {
private:
    int secret;
public:
    Box(int s): secret(s) {}
    friend void revealSecret(const Box& b);
};
void revealSecret(const Box& b) {
    cout << b.secret;
}
int main() {
    Box myBox(42);          
    revealSecret(myBox);     
    return 0;
}