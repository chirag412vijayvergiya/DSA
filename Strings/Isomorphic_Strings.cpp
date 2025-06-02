#include<iostream>
using namespace std;

bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char, char>maps_to_t;
        unordered_map<char, char>mapt_to_s;

        for(int i = 0; i < s.length(); i++){
            char st = s[i];
            char tt = t[i];

            if(maps_to_t.count(st)){
                if(maps_to_t[st] != tt){
                    return false;
                }
            }else{
                maps_to_t[st] = tt;
            }

            if(mapt_to_s.count(tt)){
                if(mapt_to_s[tt] != st){
                    return false;
                }
            }else{
                mapt_to_s[tt] = st;
            }
        }

    return true;
}

int main(){
    // string s1 = "egg";
    // string s2 = "add";
    string s1 = "foo";
    string s2 = "bar";
    bool ans  = isIsomorphic(s1, s2);

    cout<<(ans ? "Isomorphic" : "Not Isomorphic")<<endl;
    return 0;
}