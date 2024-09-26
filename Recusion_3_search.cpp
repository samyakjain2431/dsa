#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int linearSearchBackwards(vector<int>arr, int size, int target){
    
    if(size==0) return -101;
    if(arr[size-1] == target) return size-1;
    
    return linearSearchBackwards(arr, size-1, target);
}

int linearSearchForwards(vector<int>arr, int size, int target){
    if(size == 0) return -101;
    if(arr[arr.size()-size] == target) return arr.size()-size;
    
    return linearSearchForwards(arr, size-1, target);
}

int binarySearch(vector<int> arr, int target , int size, int start = 0){
    if (start >= size) return -1; 
    int mid = start + (size-start-1)/2;
    if(arr[mid] == target) return mid;
    if(arr[mid]<target) return binarySearch(arr, target, size, mid+1);
    if(arr[mid]>target) return binarySearch(arr, target, mid, start);

    return -101;
}


int main(){

    vector<int> arr = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    // iota(arr.begin(), arr.end(), 1);
    int target = -2;

    // cout<<"found at "<<linearSearchForwards(arr, arr.size(), 2)<<" position"<<endl;
    // cout<<"found at "<<linearSearchBackwards(arr, arr.size(), 2)<<" position"<<endl;
    cout<<"found at "<<binarySearch(arr,target,arr.size())<<" position"<<endl;

    return 0;
}