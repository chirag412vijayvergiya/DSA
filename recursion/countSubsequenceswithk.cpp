#include <iostream>
using namespace std;

int cnt = 0;
void generateSubsets(string s, int i, int sum, int k) {
    if(i == s.length()){
        if(sum == k){
            cnt++;
        }
        return;
    }

    // pick 
    sum += s[i] - '0';
    generateSubsets(s, i + 1, sum, k);

    // pop for backtracking
    sum -= s[i] - '0';

    // not pick
    generateSubsets(s, i + 1, sum, k);
}


int main() {
    string s = "121";
    generateSubsets(s, 0, 0, 2);
    cout<<cnt;
    return 0;
}