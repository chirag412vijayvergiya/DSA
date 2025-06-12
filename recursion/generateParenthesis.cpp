#include <iostream>
#include <vector>
using namespace std;

void generateParenthesis(int openB, int closeB, string casei, vector<string>& ans){
    if(openB == 0 && closeB == 0){
        ans.push_back(casei);
        return;
    }

    if(openB < closeB){
        generateParenthesis(openB, closeB - 1, casei + ")" , ans);
    }

    if(openB > 0){
        generateParenthesis(openB - 1, closeB, casei + "(" , ans);
    }
}


int main() {
    int n = 3;
    vector<string> ans;
    generateParenthesis(n, n, "", ans);

    cout << "Well-formed combinations:\n";
    for (const string& s : ans)
        cout << s << endl;

    return 0;
}
