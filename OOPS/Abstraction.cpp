#include<iostream>
using namespace std;

class Shopping{
    int total; // This is Encapsulating 

    public:

    Shopping(){
        total = 0;
    }

    int getTotal(){ // This is Abstraction: we are not worrying aout complexity behind the calculation
        return total;
    }

    void addTotal(int i = 0){ // This is Abstraction: we are not worrying aout complexity behind the calculation
        total += i;
    }
};

int main(){

    Shopping s1;
    cout<<s1.getTotal()<<endl;
    s1.addTotal(10);
    cout<<s1.getTotal()<<endl;
    s1.addTotal(20);
    s1.addTotal(30);
    cout<<s1.getTotal()<<endl;

    return 0;
}