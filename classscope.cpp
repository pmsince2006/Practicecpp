// #include<iostream>
// using namespace std;
// class SecretHolder {
// private:
// int secret = 11;
// public:
// int get() { return secret; }
// };
// int main() {
// SecretHolder s;
// cout << s.get(); 
// return 0;
// }

#include<iostream>
using namespace std;
class Student {
    public:
    static int count;
    Student(){
        count++;
    }
};
int Student::count = 0;
int main(){
    Student s1;
    Student s2;
    Student s3;
    Student s4;
    cout << Student::count;
    return 0;
}
