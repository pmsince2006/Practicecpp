// #include<iostream>
// using namespace std;
// class Vehicle{
//     public: 
//     void start(){
//         cout << "Vehicle started" << endl;
//     }
// };
// class car : public Vehicle{
//     public:
//     void honk(){
//         cout << "car honking" << endl;
//     }
// };
// class music : public car{
//     public:
//     void play(){
//         cout << "Playing sidhu moose aala";
//     }
// };
// int main(){
//     music mycar;
//     mycar.start();
//     mycar.honk();
//     mycar.play();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class vehicle{
//     public:
//     void start(){
//         cout << "engine started"<<endl;
//     }
// };
// class device{
//     public:
//     void open(){
//         cout << "System started" << endl;
//     }
// };
// class music : public vehicle , public device{
//     public:
//     void play(){
//         cout << "Dil da ni mada";
//     }
// };
// int main(){
//     music gana;
//     gana.start();
//     gana.open();
//     gana.play();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class person{
//     public:
//     void intro(){
//         cout << "haalo"<<endl;
//     }
// };
// class prince : public person {
//     public:
//     void delhi(){
//         cout << "abh kya tareef kare unki zulfon ki";
//     }
// };
// int main(){
//     prince boy;
//     boy.intro();
//     boy.delhi();
//     return 0;
// }


#include<iostream>
using namespace std;
class shape{
    public:
    void msg(){
        cout << "This is a shape" << endl;
    }
};
class circle : public shape{
    public:
    void gola(){
        cout << "This is a circle" << endl;
    }
};
class rectangle : public shape{
    public:
    void choco(){
        cout << "This is a rectangle"<<endl;
    }
};
int main(){
    circle c;
    rectangle r;
    c.msg();
    c.gola();
    r.choco();
    r.msg();
    return 0;
}