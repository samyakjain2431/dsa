#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> &arr, int end = -101){
    if(arr.empty()) return arr;
    if(end == -101) end = arr.size();

    if(end == 1) return arr;

    for(int i = 0; i < end - 1; i++){
        if(arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);
    }
    
    return bubbleSort(arr, end - 1);
}

int main(){
    vector<int> arr = {123, 3};
    vector<int> newArr = bubbleSort(arr);
    for (int i = 0; i < newArr.size(); i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}
