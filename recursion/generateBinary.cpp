#include <iostream>
using namespace std;

void generateBinary(int n, string ans = ""){
    if(n <= 0){
        cout<<ans<<endl;
        return;
    }

    generateBinary(n-1, ans + "0");

    generateBinary(n-1, ans + "1");
}

int main(){
    int n;
    cout << "Enter the length of binary string: ";
    cin >> n;

    cout << "All binary strings of length " << n << ":\n";
    generateBinary(n);
}