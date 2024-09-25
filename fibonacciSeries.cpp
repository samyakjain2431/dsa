#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int printFibonacciNum(int n){
    //it'll show the fibonacciNum of nth place value (starting from 0)
    
    if(n==0) return 0;
    if(n == 1) return 1;
    
    int sum = printFibonacciNum(n-1) + printFibonacciNum(n-2);
    return sum;
}



int main(){
    int n;
    
    cout<<"enter the n : ";
    cin>>n;

    cout<<printFibonacciNum(n)<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<printFibonacciNum(i)<<" ";
    }
    cout<<endl;
    
    return 0;


}