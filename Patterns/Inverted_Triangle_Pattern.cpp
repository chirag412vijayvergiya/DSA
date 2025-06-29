// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 

#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i <= n; i++){
        int k = i;
        for(int j = 1; j <= 2 * n - i - 1; j++){
            if (k){
                cout << "  ";
                k--;
            }
            else
                cout << "* ";
        }
        cout<<endl;
    }
    return 0;
}