#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>&arr)
{
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main(){
    vector<int>arr = {64,25,12,22,11};
    int n = arr.size();
    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    insertionSort(arr);
    cout << "After Sorting : " << endl;

    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}
