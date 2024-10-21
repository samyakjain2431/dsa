#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}

long long int powerFunc(int num, int power){

    if(power == 0) return 1;
    long long int a = num * powerFunc(num, power-1);
    
    return a;
}

int printDigit(int n){
    if(n == 0) return 0;
    printDigit(n/10);
    cout<<n%10<<endl;

    return 0;
}

int sayDigits(vector<string> arr, int num){
    if(num == 0){
        return 0;
    };
    sayDigits(arr, num/10);
    cout<<arr[num%10]<<endl;


    return 0;
}

int main(){

    vector<string> arr = {"Zero",
                    "One",
                    "Two",
                    "Three",
                    "Four",
                    "Five",
                    "Six",
                    "Seven",
                    "Eight",
                    "Nine",};

    sayDigits(arr, 1321312345);
    // cout<<powerFunc(10, 10)<<endl;
    // cout<<factorial(5)<<endl;
    printDigit(12345);

    return 0;
}