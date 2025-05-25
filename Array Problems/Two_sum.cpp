#include<iostream>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int>mp;
        for(int i = 0; i < n; i++){
            int x = nums[i];
            int finding = target - x;
            if(mp.find(finding) != mp.end()){
                return {mp[finding], i};
            }

            mp[x] = i;
        }
    return {-1, -1};
}

int main()
{
    vector<int> a = {2,7,11,15};
    int k = 9;
    vector<int> result = twoSum(a, k);
    int x = result[0];
    int y = result[1];

    if (x != -1 && y != -1)
        cout << "Indices with sum " << k << " are: " << x << " and " << y << "\n";
    else
        cout << "No pair found with sum " << k << "\n";

    return 0;
}