#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> &arr, int end = -1){
    if(arr.empty()) return arr;
    if(end == -1) end = arr.size()-1;
    if(end ==1 || end == 0 || end==2) return arr;

    // end = arr.size() -1;
    
    for(int i = 0; i< end; i++){
        if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    }
    
    return bubbleSort(arr, end-1);
}

int main(){

    vector<int> arr = {123,123};
    vector<int> newArr = bubbleSort(arr);
    for (int i = 0; i < newArr.size(); i++)
    {
        cout<<newArr[i]<<" ";
    }
    cout<<endl; 
    

    return 0;
}