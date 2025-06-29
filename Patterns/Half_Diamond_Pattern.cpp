// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i <= n * 2 - 1; i++){
        if(i <= n){
            for(int j = 1; j <= i; j++){
                cout<<"*"<<" ";
            }
        }else{
            for(int j = 1; j <= n*2 - i; j++){
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}