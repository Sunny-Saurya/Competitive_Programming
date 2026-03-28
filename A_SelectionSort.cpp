#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>&arr){
    int n = arr.size();

    for(int i = 0; i < n-1; i++){
        int minElement = i;
        for(int j = i+1; j < n; j++){
            if(arr[minElement] > arr[j]){
                minElement = j;
            }
        }
        swap(arr[i], arr[minElement]);
    }
}

int main(){
    vector<int>arr = {64,25,12,22,11};
    int n = arr.size();
    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    sortArray(arr);
    cout << "After Sorting : " << endl;

    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}
