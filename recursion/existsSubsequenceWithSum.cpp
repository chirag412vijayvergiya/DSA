#include <iostream>
using namespace std;

int cnt = 0;
bool existsSubsequenceWithSum(string s, int i, int sum, int k) {
    if(i == s.length()){
        return sum == k;
    }

    // pick 
    if(existsSubsequenceWithSum(s, i + 1, sum + (s[i] - '0'), k)){
        return true;
    }

    // not pick
    if(existsSubsequenceWithSum(s, i + 1, sum, k)){
        return true;
    }
    
    return false;
}


int main() {
    string s = "121";
    int k = 2;
    if (existsSubsequenceWithSum(s, 0, 0, k)) {
        cout << "YES, subsequence exists with sum " << k << endl;
    } else {
        cout << "NO, no subsequence exists with sum " << k << endl;
    }
    return 0;
}