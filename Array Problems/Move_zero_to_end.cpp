#include<iostream>
#include<vector>
using namespace std;

vector<int> moveZeros(int n, vector<int>&arr){
    if(arr.size() <= 1){
        return arr;
    }

    vector<int>q;
    int count = 0;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0){
            q.push_back(arr[i]);
        }else{
            count++;
        }
    }

    while(count > 0){
        q.push_back(0);
        count--;
    }
    return q;
}

int main(){
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}