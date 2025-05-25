#include<iostream>
using namespace std;

// int getLongestSubarray(vector<int>&arr, int k){
//     int n = arr.size();
//     int maxi = 0;
//     for(int i = 0; i < n - 1; i++){
//         int x = 0;
//         int y = 0;
//         for(int j = i; j < n; j++){
//             x += arr[j];
//             if(x == k){
//                 y = (j - i) + 1;
//             }
//         }
//         maxi = max(maxi, y);
//     }

//     return maxi;
// }


// Optimized Solution using Prefix sum
int getLongestSubarray(vector<int>&arr, int k){
    int prefixSum = 0;
    int n = arr.size();
    int maxLen = 0;
    unordered_map<int, int>mp;
    for(int i = 0; i < n; i++){
        prefixSum += arr[i];
        
        if(prefixSum == k){
            maxLen = max(maxLen, i + 1);
        }

        int rem = prefixSum - k;

        if(mp.find(rem) != mp.end()){
            maxLen = max(maxLen, i - mp[rem]);
        }
        
        if(mp.find(prefixSum) == mp.end()){
            mp[prefixSum] = i;
        } 
    }
    return maxLen;
}


int main()
{
    vector<int> a = {2,3,5};
    int k = 5;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}