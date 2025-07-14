#include<iostream>
using namespace std;
#include <climits>
int main(){
    int age = 19;
    short int num = 1234;
    double weight = 61.1000;
    long longnum = 12345678;
    float pi = 3.1415;
    cout << "The size of int " << sizeof(age) << endl;
    cout << "The size of weight " << sizeof(weight) << endl;
    cout << "The size of short " << sizeof(num) << endl;
    cout << "The size of long " << sizeof(longnum) << endl;
    cout << "The size of float " << sizeof(pi) << endl;
    cout << INT_MIN << endl;
    cout << INT_MAX << endl;

    float cat = 2.5;
    int dog = int(cat);
    // int x = 10;
    // float y = float(x);
    cout << "Type casted value:" << dog << endl;
    // cout << "Int to float: "<< y;
    return 0;
}