#include<iostream>
using namespace std;

string removeOuterParentheses(string s) {
        int n = s.size();
        string ans;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '(' && count == 0){
                count++;
            }
            else if(s[i] == '(' && count >= 1){
                ans += s[i];
                count++;
            }
            else if(s[i] == ')' && count > 1){
                ans += s[i];
                count--;
            }
            else if(s[i] == ')' && count == 1){
                count--;
            }
        }
    return ans;
}

int main(){
    string s = "(()())(())";
    string ans  = removeOuterParentheses(s);

    for(int i = 0; i < ans.length(); i++){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}