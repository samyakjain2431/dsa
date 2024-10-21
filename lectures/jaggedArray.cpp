#include<iostream>
using namespace std;

int myFunc(){
    
    //your code goes here
    
    return 0;
}

int main(){

    int row;
    cout<<"enter rows : "<<endl;
    cin>>row;
    int sizes[row];

    int **arr = new int*[row];

    // making 2D
    for (int i = 0; i < row; i++)
    {   
        cout<<"no of col : "<<endl;
        cin>>sizes[i];
        arr[i] = new int[sizes[i]];
    }

    //taking inputs
    cout<<"enter data" <<endl;
    for (int i = 0; i < row; i++){
        cout<<"col size : "<<sizes[i]<<" ";
        for (int j = 0; j < sizes[i]; j++){
            cin>>arr[i][j];
        }
        
    }
    
    //output
    for (int i = 0; i < row; i++)
    {
        // cout<<"col size : "<<sizes[i]<<endl;
        for (int j = 0; j < sizes[i]; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    for (int i = 0; i < row; i++)
    {
        delete [] arr[i];
    }

    delete [] arr;

}