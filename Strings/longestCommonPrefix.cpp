#include<iostream>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].size();
        int m = strs.size();
        int j = 0;
        string ans = "";
        for(int i = 0; i < n; i++){
            char x = strs[0][i];
            bool flag = 0;
            for(int j = 1; j < m; j++){
                if(x != strs[j][i]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                ans += x;
            }else{
                break;
            }
        }
    return ans;
}

int main(){
    vector<string> strs = { "flower","flow","flight" };
    string ans  = longestCommonPrefix(strs);

    for(int i = 0; i < ans.length(); i++){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}