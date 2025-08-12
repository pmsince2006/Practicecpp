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
// class shape{
//     public:
//     void msg(){
//         cout << "This is a shape" << endl;
//     }
// };
// class circle : public shape{
//     public:
//     void gola(){
//         cout << "circle" << endl;
//     }
// };
// class rectangle : public shape{
//     public:
//     void choco(){
//         cout << "rectangle"<<endl;
//     }
// };
// int main(){
//     circle c;
//     rectangle r;
//     c.msg();
//     c.gola();
//     r.msg();
//     r.choco();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class person{
//     public:
//     void intro(){
//         cout << "helo g"<<endl;
//     }
// };
// class student : public person {
//     public:
//     void study(){
//         cout << "i read in second year";
//     }
// };
// int main(){
//     student boy;
//     boy.intro();
//     boy.study();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class device{
//     public:
//     void intro(){
//         cout << "this is a device" << endl;
//     }
// };
// class computer : public device{
//     public:
//     void main(){
//         cout<< "this is a computer" << endl;
//     }
// };
// class laptop : public computer{
//     public:
//     void footer(){
//         cout << "this is a laptop" << endl;
//     }
// };
// int main(){
//     laptop hp;
//     hp.intro();
//     hp.main();
//     hp.footer();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class pawn{
//     public:
//     void intro(){
//         cout << "this is public";
//     }
//     protected:
//     void main(){
//         cout << "this is protected";
//     }
//     private:
//     void footer(){
//         cout << "this is private";
//     }
// };
// class knight : public pawn{
//     public:
//     void header(){
//         cout << "this is knight";
//     }
// };
// class king : private pawn{
//     public:
//     void tag(){
//         cout <<  "this is king";
//     }
// };
// class queen : protected pawn{
//     public:
//     void div(){
//         cout << "this is queen";
//     }
// };
// int main(){
//     knight k;
//     k.intro();
//     king p;
//     p.main();
//     queen q;
//     q.footer();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class shape{
//     public:
//     virtual void draw() = 0;
//     void move(){
//         cout << "Moving shape" << endl;
//     }
// };
// class circle : public shape{
//     public:
//     void draw() override{
//         cout << "Drawing circle" << endl;
//     }
// };
// int main(){
//     circle c;
//     c.draw();
//     c.move();
//     return 0;
// }

#include <iostream>
using namespace std;
class Sample {
public:
    int publicVar;
protected:
    int protectedVar;
private:
    int privateVar;
public:
    Sample(int pub, int prot, int priv) {
        publicVar = pub;
        protectedVar = prot;
        privateVar = priv;
    }
    void printValues() {
        cout << "Public Variable: " << publicVar << endl;
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Private Variable: " << privateVar << endl;
    }
};

