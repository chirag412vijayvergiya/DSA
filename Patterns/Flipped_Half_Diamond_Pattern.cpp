//     *
//    **
//   ***
//  ****
// *****
//  ****
//   ***
//    **
//     *

#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i <= n * 2 - 1; i++){
        if(i <= n){
            for(int j = 1; j <= n - i; j++){
                cout<<" "<<" ";
            }
            for(int j = n - i + 1; j <= n; j++){
                cout<<"*"<<" ";
            }
        }
        else{
            for(int j = 1; j <= i - n; j++){
                cout<<" "<<" ";
            }
            for(int j = i - n + 1; j <= n; j++){
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}