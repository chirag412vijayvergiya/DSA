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

void insertionSort(vector<int>&arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        for(int j = i; j > 0; j--){
            if(arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }else{
                break;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(vector<int>&arr, int low, int mid, int high){
    vector<int>temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int>&arr, int low, int high){
    if(low >= high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid); // left wala part divide
    mergeSort(arr, mid + 1, high); // right wala part divide
    merge(arr, low, mid, high);
}

int partition(vector<int>&arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while(arr[j] >= pivot &&  j >= low + 1){
            j--;
        }

        if(i < j) swap(arr[i], arr[j]);
    }

    return j;
}

void QuickSort(vector<int>&arr, int low, int high){
    if(low >= high) return;

    int partitionIn = partition(arr, low, high);

    QuickSort(arr, low, partitionIn - 1);

    QuickSort(arr, partitionIn + 1, high);
}

int main(){
    cout<<"The sorted Elements are :- "<<endl;
    vector<int>arr = {64, 25, 12, 22, 11, 10, 9, 23, 32};
    vector<int> arr1 = arr;
    cout<<"Selection Sort Algorithm :- ";
    Selectionsort(arr1);
    vector<int> arr2 = arr;
    cout<<"Bubble Sort Algorithm :- ";
    bubbleSort(arr2);
    vector<int> arr3 = arr;
    cout<<"Insertion Sort Algorithm :- ";
    insertionSort(arr3);
    vector<int> arr4 = arr;
    int n = arr4.size();
    cout<<"Merge Sort Algorithm :- ";
    mergeSort(arr4, 0, n - 1);
    for(int i = 0; i < arr4.size(); i++){
        cout<<arr4[i]<<" ";
    }
    cout<<endl;
    vector<int> arr5 = arr;
    int m = arr5.size();
    cout<<"Quick Sort Algorithm :- ";
    mergeSort(arr5, 0, m - 1);
    for(int i = 0; i < arr5.size(); i++){
        cout<<arr5[i]<<" ";
    }
    cout<<endl;
    return 0;
}