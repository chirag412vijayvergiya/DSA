#include<iostream>
using namespace std;

int maxDepth(string s) {
        int n = s.length();
        int maxi = 0;
        int count = 0;
        for(int i = 0; i < n; i++){
            char z = s[i];
            if(z == '('){
                count++;
                maxi = max(maxi, count);
            }else if(z == ')'){
                count--;
            }
        }
    return maxi;
}

int main(){
    string s = "(1+(2*3)+((8)/4))+1";
    int ans  = maxDepth(s);

    cout<<ans<<endl;
    return 0;
}