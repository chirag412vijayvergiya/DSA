#include<iostream>
using namespace std;


//1. Single level Inheritence
// class Base{
//     public:
//     Base(){
//         cout<<"Base class"<<endl;
//     }
// };

// class Child : public Base {
//     public:
//     Child(){
//         cout<<"Child class"<<endl;
//     }
// };

// int main(){
//     Child ch;
//     return 0;
// }

//2. Multiple Inheritence
// class Base1 {
//     public:
//     Base1(){
//         cout<<"Base1 class"<<endl;
//     }
// };

// class Base2 {
//     public:
//     Base2(){
//         cout<<"Base2 class"<<endl;
//     }
// };

// class Child : public Base1, public Base2 {
//     public:
//     Child(){
//         cout<<"Child class"<<endl;
//     }
// };


// int main(){
//     Child ch;
//     return 0;
// }

//3. Mulilevel Inheritence
// class Base1 {
//     public:
//     Base1(){
//         cout<<"Base1 class"<<endl;
//     }
// };

// class Child1 : public Base1 {
//     public:
//     Child1(){
//         cout<<"Child1 class"<<endl;
//     }
// };

// class Grandchild : public Child1 {
//     public:
//     Grandchild(){
//         cout<<"Grandchild class"<<endl;
//     }
// };


// int main(){
//     Grandchild ch;
//     return 0;
// }

// 4. Hierarchichal Inheritence
// class Base1 {
//     public:
//     Base1(){
//         cout<<"Base1 class"<<endl;
//     }
// };

// class Child1 : public Base1 {
//     public:
//     Child1(){
//         cout<<"Child1 class"<<endl;
//     }
// };

// class Child2 : public Base1 {
//     public:
//     Child2(){
//         cout<<"Child2 class"<<endl;
//     }
// };


// int main(){
//     Child1 ch1;
//     Child2 ch;
//     return 0;
// }

// 5. Hybrid Inheritence
class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle"<< endl;
    }
};

class Fare {
public:
    Fare() {
        cout << "Fare of Vehicle"<< endl;
    }
};

class Car : public Vehicle {
  public:
  Car() {
      cout << "This Vehical is a Car"<< endl;
  }
};

class Bus : public Vehicle, public Fare {
  public:
  Bus() {
      cout << "This Vehicle is a Bus with Fare"<<endl;
  }
};

int main() {
    Bus obj;
    return 0;
}