// Class :- It is a user-defined data type that is used to represent a class of objects. It is a blueprint for creating objects. A class contains data members and member functions.
// Object :- An object is an instance of a class. It is a collection of data members and member functions. An object is created using the class.

#include<iostream>
using namespace std;

// class Animal {
//     // int val; // private by default
//     public: 
//     static string species;
//     int hand;
//     int age;

//     Animal(int hand){
//         this -> hand = hand;
//     }

//     // This is Member function
//     // No memory is allocated to the class definition. 
//     void eat(){
//         cout<<"Eating"<<endl;
//         cout<<age<<endl;
//         // cout<<val<<endl;
//         cout<<hand<<endl;
//         cout<<species<<endl;
//     }

// };

//  string Animal::species = "Bird" ; // static data variable

// int main(){
//     // Objects are the actual entities that are created as an instance of a class
//     Animal a(100);

//     // a.val = 20;
//     a.age = 10;
//     cout<<Animal::species<<endl;
//     a.eat();
// }


// Access Modifiers 
// Private, public, Protected 

// class Animal {
//     int val; // private by default

//     public: 
//     int hand;
//     int age;

//     int dono_ka_multiply(){
//         return hand * age;
//     }

//     int val_ka_multiply(){
//         return val * 4;
//     }
// };


// int main(){
//     Animal a;
//     a.hand = 4;
//     a.age = 30;
//     // a.val = 34; Will give error because of private member
//     cout<<"Hands are :- "<<a.hand<<endl;
//     cout<<"Dono ka Multiply :- "<<a.dono_ka_multiply()<<endl;
//     // cout<<"Val ka Multiply :- "<<a.val_ka_multiply()<<endl;
    
//     return 0;
// }

// For Access private members we use setter and getter 

// class Animal {
//     int val; // private by default

//     public:
//     void setter(int value){
//         val = value;
//     }

//     int val_ka_multiply(){
//         return val * 4;
//     }

// };


// int main(){
//     Animal a;
//     a.setter(20);

//     cout<<"Val ka Multiply :- "<<a.val_ka_multiply()<<endl;
    
//     return 0;
// }

// Protect Access Identifiers :- Same as private but can be accessed by derived classes
// class Animal {
//     protected:
//     int val;
// };

// class child : public Animal {
//     public:
//     void setter(int value){
//         val = value;
//     }

//     int getter(){
//         return 5 * val;
//     }
// };

// int main(){

//     child x1;
//     x1.setter(20);

//     cout<<x1.getter()<<endl;
//     return 0;
// }

// # Friend Class

// class animal{
//     private:
//     int private_variable;

//     protected:
//     int protected_variable; 

//     public:
//     void setter(int val){
//         private_variable = val * 2;
//         protected_variable = val * 4;
//     }

//     friend class fri;
// };

// class fri{
//     public: 
//     void getter(animal a){
//         cout<<a.private_variable<<endl;
//         cout<<a.protected_variable<<endl;
//     }
// };

// int main(){
//     animal a;
//     a.setter(20);
//     fri f;
//     f.getter(a);

//     return 0;
// }