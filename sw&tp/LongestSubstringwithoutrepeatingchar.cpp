#include<iostream>
#include <unordered_set>
using namespace std;

int solution(string s){
    if(s.size() == 0) return 0;
    int maxLen = 0;
for(int i = 0; i < s.length(); i++){
        unordered_set<int>set;

        for(int j = i; j < s.length(); j++){
            if(set.find(s[j]) != set.end()){
                maxLen = max(maxLen, j - i);
                break;
            }

            set.insert(s[j]);
        }       
    }

    return maxLen;
}

int main(){
    string s = "abcabcbb";

    int ans = solution(s);

    cout<<"The length of the longest substring without repeating characters is :- "<<ans<<endl;

    return 0;
}