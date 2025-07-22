#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    // int arr[3];
    int min;
    cin >> x >> y >> z;
    if(x>y && x>z){
        cout << "Largest is: " << x << endl;
        if(y>z){
            min = z;
        }
        else if(z>y){
            min = y;
        }
    }
    else if(y>x && y>z){
        cout << "Largest is: " << y << endl;
        if(x>z){
            min = z;
        }
        else if(z>x){
            min = x;
        }
    }
    else if(z>x && z>y){
        cout << "Largest is: " << z << endl;
        if(x>y){
            min = y;
        }
        else if(y>x){
            min = x;
        }
    }
    cout << "Smallest number is: " << min << endl;
    if(x>y) swap(x,y);
    if(y>z) swap(y,z);
    if(x>y) swap(x,y);
    cout << "In ascending order:" << x << y << z << endl;

    if(x<y) swap(x,y);
    if(y<z) swap(y,z);
    if(x<y) swap(x,y);
    cout << "In descending order:" << x << y << z;
    return 0;
}