#include<iostream>
using namespace std;

string largestOddNumber(string num) {
        int n = num.size();
        string ans = "";
        int i = n - 1;
        for(; i >= 0; i--){
            if(int(num[i]) % 2 != 0){
                break;
            }
        }
        if(i < 0){
            return "";
        }else{
            for(int j = 0; j <= i; j++){
                ans += num[j];
            }
        }
    return ans;
}

int main(){
    string s = "52";
    string ans  = largestOddNumber(s);

    for(int i = 0; i < ans.length(); i++){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}