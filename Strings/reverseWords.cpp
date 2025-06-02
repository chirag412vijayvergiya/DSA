#include<iostream>
using namespace std;

string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        string temp = "";
        int i = n - 1;
        for(; i >= 0; i--){
            if(s[i] != ' '){
                temp += s[i];
            }
            else if(s[i] == ' '){
                for(int j = temp.size() - 1; j >= 0; j--){
                    ans += temp[j];
                }
                if(temp.size() != 0 && (ans.empty() || ans.back() != ' ')){
                    // cout<<temp.size()<<" "<<i<<endl;
                    ans += ' ';
                    temp = "";
                }
            }
        }
        if(temp.size() != 0 && i < 0){
            for(int j = temp.size() - 1; j >= 0; j--){
                ans += temp[j];
            }
        }

        if (!ans.empty() && ans.back() == ' ') {
            ans.pop_back();
        }
    return ans;
}

int main(){
    // string s = "the sky is blue";
    // string s = "  hello world  ";
    string s = "a good   example";
    
    string ans  = reverseWords(s);

    for(int i = 0; i < ans.length(); i++){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}