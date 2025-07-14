#include<iostream>
using namespace std;
int global = 10;
void scope(){
    int local = 5;
    cout << "Local:" << local << endl;
    cout << "Global:" << global << endl;
}
int main(){
    int local = 15;
    scope();
    cout << "Local:" << local << endl;
    cout << "Global:" << global << endl;
    return 0;
}
