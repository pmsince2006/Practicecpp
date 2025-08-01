// #include<iostream>
// using namespace std;
// struct Point{
//     int x,y;
// };
// int add(int x,int y){
//     return x + y;
// }
// int sub(int x,int y){
//     return x - y;
// }
// int mul(int x,int y){
//     return x * y;
// }
// float divi(int x,int y){
//     return x / y;
// }
// int main(){
//     Point p;
//     p.x = 32;
//     p.y = 4;
//     cout << "Addition:" << add(p.x,p.y) << endl;
//     cout << "Difference:" << sub(p.x,p.y) << endl;
//     cout << "Multiplication:" << mul(p.x,p.y) << endl;
//     cout << "Division:" << divi(p.x,p.y) << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Rectangle{
//     public:
//         int x;
//         int y;
// };
// int main(){
//     Rectangle box;
//     box.x = 4;
//     box.y = 6;
//     cout << "Area: " << box.x*box.y << endl;
//     return 0;
// }


#include<iostream>
using namespace std;
class Circle {
public:
    double radius;
};
int main() {
    Circle* c = new Circle;
    c->radius = 4.2;
    cout << "Radius: "<<c->radius;
    delete c;
    return 0;
}

// #include<iostream>
// using namespace std;
// struct Date {
//     int day;
//     int month;
//     int year;
// };
// int main() {
//     Date d1;
//     d1.day = 15;
//     d1.month = 9;
//     d1.year = 2006;
//     cout<<d1.day<<"-"<<d1.month<<"-"<<d1.year<<endl;
//     Date* d2=new Date;
//     d2->day = 01;
//     d2->month = 8;
//     d2->year = 2025;
//     cout << d2->day << "-" << d2->month << "-" << d2->year << endl;
//     delete d2;
//     return 0;
// }