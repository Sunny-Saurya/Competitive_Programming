#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr, int left, int mid, int right){
    int l1 = mid - left + 1;
    int r1 = right - mid;

    vector<int>temp1(l1), temp2(r1);
    // copying the elemenet in this

    for(int i = 0; i < l1; i++){
        temp1[i] = arr[left + i];
    }
    for(int j = 0; j < r1; j++){
        temp2[j] = arr[mid+1+ j];
    }

    int i = 0, j = 0,  k = left;

    while(i < l1 && j < r1){
        if(temp1[i] <= temp2[j]){
            arr[k] = temp1[i];
            i++;
        }
        else{
            arr[k] = temp2[j];
            j++;
        }
        k++;
    }


    while(i < l1){
        arr[k] = temp1[i];
            i++;
            k++;
    }

    while(j < r1){
        arr[k] = temp2[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>&arr, int left, int right){
    if(left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
}

int main(){
    vector<int> arr = {38, 27, 43, 10};
    int n = arr.size();

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}