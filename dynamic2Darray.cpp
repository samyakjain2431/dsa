#include<iostream>
using namespace std;

int myFunc(){
    
    //your code goes here
    
    return 0;
}

int main(){

    int n;
    cin>>n;

    int **arr = new int*[n];

    // making 2D
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int [n];
    }

    //taking inputs
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    //output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    for (int i = 0; i < n; i++)
    {
        delete [] arr[i];
    }

    delete [] arr;
    
    


}