// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     int i;
//     int* ptr = arr;
//     cout << "Enter the elements:";
//     for(i=0;i<5;i++){
//         cin >> arr[i];
//     }
//     for(i=0;i<5;i++){
//         cout << *(ptr+i);
//     }
//     return 0;
// }

// #include<iostream>
// #include<memory>
// using namespace std;
// int main(){
//     unique_ptr<int> p1(new int(42));
//     cout << "Number:" << *p1 ;
//     return 0;
// }

#include<iostream>
#include<memory>
using namespace std;
int main(){
    shared_ptr<int> p1(new int(42));
    shared_ptr<int> p2 = p1;
    shared_ptr<int> p3 = p2;
    cout << "p1 " << *p1 << ' ' << "p2 " << *p2 << endl;
    cout << "p2 " << *p2 << ' ' << "p3 " << *p3 << endl;
    cout << p1.use_count();
    return 0;
}

// #include<iostream>
// #include<memory>
// using namespace std;
// int main(){

// }