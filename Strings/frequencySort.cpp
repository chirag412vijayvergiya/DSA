#include<iostream>
#include<unordered_map>
using namespace std;

string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i = 0 ; i < s.length(); i++){
            mp[s[i]]++;
        }
        s="";
        vector<pair<char,int>>vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(),[](const pair<char,int>& a, const pair<char, int>& b){
            return a.second > b.second;
        });

        for(auto i:vec){
            int count = 0;
            while(count < i.second){
                s += i.first;
                count++;                
            }
        }
    return s;
}

int main(){
    string s = "tree";
    string ans  = frequencySort(s);

    for(int i = 0; i < ans.length(); i++){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}