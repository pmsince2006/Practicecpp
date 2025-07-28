#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int i;
    int* ptr = arr;
    cout << "Enter the elements:";
    for(i=0;i<5;i++){
        cin >> arr[i];
    }
    for(i=0;i<5;i++){
        cout << *(ptr+i);
    }
    return 0;
}