#include<iostream>
using namespace std;

// int fib(int n){
//     if(n == 0){
//         return 0;
//     }
//     else if (n == 1)
//         return 1;

//     return fib(n-1) + fib(n-2);
// }


// int main(){
//     int n;
//     cout<<"Enter a number :- "<<endl;
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         cout << fib(i) << " ";
//     }
//     return 0;
// }


// int fac(int n){
//     if(n == 0 || n == 1){
//         return 1;
//     }

//     return n * fac(n-1);
// }


// int main(){
//     int n;
//     cout<<"Enter a number :- "<<endl;
//     cin>>n;
//     cout<<fac(n)<<endl;
//     return 0;
// }

// int sod(int n){
//     if(n == 0){
//         return 0;
//     }

//     return n % 10 + sod(n/10);
// }


// int main(){
//     int n;
//     cout<<"Enter a number :- "<<endl;
//     cin>>n;
//     cout<<sod(n)<<endl;
//     return 0;
// }

// void print_1_to_n(int i, int n){
//     if(i == n + 1){
//         return;
//     }

//     cout<<i<<endl;

//    print_1_to_n(i + 1, n);
// }


// int main(){
//     int n;
//     cout<<"Enter a number :- "<<endl;
//     cin>>n;
//     print_1_to_n(1, n);
//     return 0;
// }

int revn(int n, int sum = 0){

    if(n == 0){
        return sum;
    }
    // cout<<n<<endl;
    return revn(n / 10, sum * 10 + (n % 10));
}


int main(){
    int n;
    cout<<"Enter a number :- "<<endl;
    cin>>n;
    cout<<revn(n)<<endl;
    return 0;
}