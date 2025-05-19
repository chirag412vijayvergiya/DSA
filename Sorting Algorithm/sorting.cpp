#include<iostream>
#include<vector>
using namespace std;
void Selectionsort(vector<int>&arr){
    int n = arr.size();
    int temp = 0;
    for(int i = 0; i < n - 1; i++){
        int mini_in = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[mini_in]){
                mini_in = j;
            }
        }
        temp = arr[mini_in];
        arr[mini_in] = arr[i];
        arr[i] = temp;
        // for(int i = 0; i < n; i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(vector<int>&arr){
    int n = arr.size();
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j <= i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    cout<<"The sorted Elements are :- "<<endl;
    vector<int>arr = {64, 25, 12, 22, 11, 10, 9, 23, 32};
    cout<<"Selection Sort Algorithm :- ";
    Selectionsort(arr);
    cout<<"Bubble Sort Algorithm :- ";
    bubbleSort(arr);
    return 0;
}