#include <iostream>
using namespace std;

// int main() {
//     int x = 10;
//     int& ref = x;
//     cout << ref << endl;
//     ref = 22;
//     cout << ref << endl;

//     return 0;
// }

// void modifyValue(int &x) {
  
//     // Modifies the original variable
//     x = 20;  
// }

// int main() {
//     int a = 10;
  
//     // Pass a by reference
//     modifyValue(a);
    
//     cout << a << endl;
//     return 0;
// }

// int& getMax(int &a, int &b) {
  
//     return (a > b) ? a : b;  
// }

// int main() {
//     int x = 10, y = 20;
//     int &maxVal = getMax(x, y);
  
//     maxVal = 30;  
//     cout << "x = " << x << ", y = " << y << endl;
//     return 0;
// }

int main() {
    vector<int> vect{ 10, 20, 30, 40 };

    for (int& x : vect) {
        x = x + 5;
    }

    for (int x : vect) {
        cout << x << " ";
    }
    cout<<endl;
    return 0;
}