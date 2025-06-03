#include<iostream>
using namespace std;

bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int n = s.length();
        unordered_map<char,int>mp;
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
        }

        for(int i = 0; i < n; i++){
            mp[t[i]]--;
            if(mp[t[i]] < 0){
                return false;
            }
        }

        for(auto i : mp){
            if(i.second > 0 || i.second < 0){
                return false;
            }
        }
    return true;
}

int main(){
    string s1 = "rat";
    string s2 = "car";
    // string s1 = "anagram";
    // string s2 = "nagaram";
    bool ans  = isAnagram(s1, s2);

    cout<<(ans ? "Is Anagram" : "Not Anagram")<<endl;
    return 0;
}