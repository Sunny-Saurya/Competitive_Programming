#include <bits/stdc++.h>
using namespace std;

// Function to find index of minimum element
int minIndex(vector<int>& arr, int s, int e) {
    int sml = INT_MAX;
    int mindex = s;

    for (int i = s; i < e; i++) {
        if (arr[i] < sml) {
            sml = arr[i];
            mindex = i;
        }
    }
    return mindex;
}

// Recursive function (Selection Sort style)
void fun2(vector<int>& arr, int start_index, int end_index) {
    if (start_index >= end_index)
        return;

    int min_index = minIndex(arr, start_index, end_index);
    swap(arr[start_index], arr[min_index]);

    fun2(arr, start_index + 1, end_index);
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};

    fun2(arr, 0, arr.size());

    for (int x : arr)
        cout << x << " ";

    return 0;
}