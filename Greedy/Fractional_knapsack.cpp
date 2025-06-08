#include<iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Item {
   int value;
   int weight;
};


class Solution {

    bool static cmp(Item a, Item b) {
        double r1 = (double)a.value / (double) a.weight;
        double r2 = (double)b.value / (double) b.weight;
        return r1 > r2;
    }

    public:
    double fractionalKnapsack(int weight, Item arr[], int n){
        sort(arr, arr + n, cmp);

        double ans = 0.00;
        int x = weight;
        for(int i = 0; i < n; i++){
            if(arr[i].weight <= x){
                ans += arr[i].value;
                x -= arr[i].weight;
            }else{
                ans += (double)arr[i].value * ((double)x / arr[i].weight);
                break;
            }
        }
        return ans;
    }
};



int main() {
   int n = 3, weight = 50;
   Item arr[] = { {100,20},{60,10},{120,30} };
   Solution obj;
   double ans = obj.fractionalKnapsack(weight, arr, n);
   cout << "The maximum value is " << setprecision(2) << fixed << ans;
   return 0;
}