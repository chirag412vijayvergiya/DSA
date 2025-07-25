#include<iostream>
using namespace std;

bool isPalindrome(int n){
    int reversed = 0;
    int original = n;

    while(original > 0){
        int x = original % 10;
        original /= 10;
        reversed  = reversed * 10 + x;
    }

    // cout<<"hii:- "<<reversed<<endl;
    return reversed == n;
}

int nextNumber(int n){
    int next = n + 1;
    // cout<<"Hello :- "<<next;
    while(true){
        if(isPalindrome(next)){
            return next;
        }
        next += 1;
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter a number :- "<<endl;
    cin>>n;

    int p = nextNumber(n);
    cout<<p<<endl;
    return 0;
}