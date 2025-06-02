#include<iostream>
using namespace std;

bool rotateString(string s, string goal) {
    if(goal == s){
        return true;
    }

    if(goal.length() != s.length()){
        return false;
    }

    queue<char>q1, q2;

    for(int i = 0; i < s.length(); i++){
        q1.push(s[i]);
    }
    for(int j = 0; j < goal.length(); j++){
        q2.push(goal[j]);
    }

    int i = s.length() - 1;

    while(i != 0){
        char q = q1.front();
        q1.pop();
        q1.push(q);

        if(q1 == q2){
            return true;
        }

        i--;
    }

    return false;
}

int main(){
    string s = "abcde";
    string goal = "cdeab";
    bool ans  = rotateString(s, goal);

    cout<<(ans ? "same" : "Not same")<<endl;
    return 0;
}