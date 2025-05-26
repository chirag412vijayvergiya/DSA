#include<iostream>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += nums[j];
            if(sum > maxi){
                maxi = sum;
            }
            // If negative then why need to go in minus instead of this we will start with the new subarray.
            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }

int main()
{
    vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
    int k = 9;
    int ans = maxSubArray(a);
    
    cout<<"Maximum Subarray Sum is: " << ans << "\n";

    return 0;
}