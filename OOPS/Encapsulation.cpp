//  Encapsulation :-  Is defined as a wrapping up of data and information in a single unit.
// It facilitates data hiding using accesss specifiers (private, public, protected). 

#include<iostream>
using namespace std;

class Person {
    
    int socialID;
    string name;

    public:

    Person(string n, int id){
        name = n;
        socialID = id;
    }

    string getName() {
        return name;
    }

    bool validateID() {
        if (socialID <= 1001 && socialID >= 0)
            return true;
        else
            return false;
    }
};

int main(){
    Person p1("Chirag", 12342);
    cout<<p1.getName()<<endl;
    if (!p1.validateID()) cout << "Invalid SocialID\n";

    return 0;
}