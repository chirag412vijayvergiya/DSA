#include<iostream>
using namespace std;

vector<int> printLeaders(vector<int>&arr, int n){
    vector<int>ans;
    ans.push_back(arr[n-1]);
    int x = arr[n-1];
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] > x){
            x = arr[i];
            ans.push_back(x);
        }
    }
    return ans;
}

int main(){
  vector<int> arr = {10, 22, 12, 3, 0, 6};
  int n = arr.size();

  vector<int> ans = printLeaders(arr,n);
  
  for(int i = ans.size() - 1; i >= 0; i--){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  return 0;
}