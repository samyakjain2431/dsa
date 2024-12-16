#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int arraySum(vector<int> arr, int size, int sum){
    
    if(size == 0) return sum;
    sum += arr[size-1] ;
    return arraySum(arr, size-1, sum);
}

bool isArraySorted(vector<int> arr, int size){
    
    if(size<2){
        return true;
    }

    if(arr[size-1] >= arr[size-2]){
        // cout<<size-1<<"th >= "<<size-2<<"th"<<endl;
        return isArraySorted(arr, size-1);
    }
    else{
        return false;
    } 
}

int main(){
    int mySum = 0; 
    vector<int> arr = {1,2,3,4,5, 100};
    isArraySorted(arr,arr.size())?cout<<"sorted"<<endl: cout<<"unsorted"<<endl;    
    cout<<arraySum(arr, arr.size(), mySum)<<endl;

    return 0;
}