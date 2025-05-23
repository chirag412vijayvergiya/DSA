#include<iostream>
using namespace std;

// Types of Polymorphism
// Two types:

// 1. Compile-time Polymorphism (early binding and static polymorphism)
// 2. Runtime Polymorphism

// 1. Compile-time Polymorphism

// A) Function Overloading

// class Math{

//     public:
//     int setter(int a, int b){
//         return a + b;
//     }

//     double setter(double a, int b){
//         return a * b;
//     }

// };

// int main(){

//     Math m1;
//     cout<<m1.setter(10, 20)<<endl;
//     cout<<m1.setter(10.0, 30)<<endl;
    
//     return 0;
// }

// B) Operator Overloading

// class Math{
//     public:
//     int real, img;

//     Math(int r, int i):
//     real(r), img(i) {}

//     Math operator+(const Math&obj ){
//         return Math(real + obj.real, img + obj.img);
//     }

// };

// int main(){
//     Math m1(10, 5), m2(2, 4);
//     Math m3 = m1 + m2;
//     cout<<m3.real<<" + "<<m3.img<<"i"<<endl;
    
//     return 0;
// }

// 2. Runtime Polymorphism

class Base{
    public:

    // The base class function must be declared as virtual function for runtime polymorphism to happen.
    virtual void display() {   
        cout << "Base class function";
    }
};

class Derived : public Base {
public:

    // Overriding the base class function
    void display() override {
        cout << "Derived class function";
    }
};

int main(){
    Base* b1;

    Derived d1;

    b1 = &d1;

    b1->display();
    return 0;

}