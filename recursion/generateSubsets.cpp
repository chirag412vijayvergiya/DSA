#include <iostream>
using namespace std;

void generateSubsets(string s, string f, int i) {
    if(i == s.length()){
        cout<<f<<endl;
        return;
    }

    // pick 
    f.push_back(s[i]);
    generateSubsets(s, f, i + 1);

    // pop for backtracking
    f.pop_back();

    // not pick
    generateSubsets(s, f, i + 1);
}


int main() {
    string s = "abc";
    generateSubsets(s, "", 0);
    return 0;
}