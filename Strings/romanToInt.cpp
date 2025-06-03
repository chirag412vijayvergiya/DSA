#include<iostream>
using namespace std;

int romanToInt(string s) {
        int n = s.length();
        int ans=0;
        unordered_map <char,int> mp{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        for(int i = 0; i < n; i++){
            if(mp[s[i]] < mp[s[i+1]]){
                ans += mp[s[i+1]] - mp[s[i]];
                i+=1;
            }else{
                ans += mp[s[i]];
            }

            // cout<<ans<<endl;
        }

    return ans;
}

int main(){
    string s = "MCMXCIV";
    int ans  = romanToInt(s);

    cout<<ans<<endl;
    return 0;
}