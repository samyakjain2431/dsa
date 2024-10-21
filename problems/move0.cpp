#include <iostream>
#include<vector>
using namespace std;


int main () {

    vector<int> arr = {1,2,0,4,3,0,5,0};
    int i = 0, j = arr.size()-1;
    while(i<j){
        while(i<j && arr[i]!=0)i++;
        while(i<j && arr[j]==0)j--;
        cout << i << " " << j << endl;
        swap(arr[i], arr[j]);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }


    

    return EXIT_SUCCESS;
}