#include<iostream>
using namespace std;

// int main(){
//     int var = 10;

//     int *ptr = &var;

//     cout<<"Address of var which is stored in ptr :- "<<ptr<<endl; // It will give the address of var
//     cout<<"value of var whose address is stored in ptr :- "<<*ptr<<endl; // It will give the value of var
//     return 0;
// }

// int main(){
//     int a = 10;
//     int b = 99;

//     int *ptr = &a;
//     cout << *ptr << endl;

//     ptr = &b;
//     cout<<*ptr<<endl;

//     return 0;
// }

// int main(){
//     int *ptr1;
//     char *ptr2;
    
//     // Finding size using sizeof()
//     cout << sizeof(ptr1) << endl;
//     cout << sizeof(ptr2) << endl;
    
//     // 8 bytes for a 64-bit System
//     // 4 bytes for a 32-bit System
//     return 0;
// }

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
    
//     // Creating a pointer to the first element
//     int *ptr1 = &arr[0];
    
//     // Creating another pointer to array
//     int *ptr2 = arr;
    
//     // Accessing
//     cout << *ptr1 << endl;
//     cout << *ptr2 << endl;
//     return 0;
// }


int main() {
    int var = 10;

    int* ptr1 = &var;
    int** ptr2 = &ptr1;
    
    cout << *ptr1 << endl;
    cout << **ptr2 << endl;
    return 0;
}