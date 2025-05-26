#include<iostream>
using namespace std;

void recurPermute(int ind, string &s, vector<string>&ans){

    if(ind == s.size()){
        ans.push_back(s);
        return;
    }

    for(int i = ind; i < s.size(); i++){
        swap(s[i], s[ind]);
        recurPermute(ind + 1, s, ans);
        swap(s[i], s[ind]);
    }   
}

vector<string> findPermutation(string &s) {
    vector<string> ans;
    recurPermute(0, s, ans);
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    string s = "ABC";
    vector<string> res = findPermutation(s);
    for(auto x: res) {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}