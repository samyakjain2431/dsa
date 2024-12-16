#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int powerOf(int num = 1, int power = 1){
    if(power == 0) return 1;
    return num * powerOf(num, power-1);
}

int powerOfNew(int num = 1, int power = 1){
    //more optimized and half numbers of calling
    if(power ==0) return 1;
    if(power == 1) return num;
    int ans = powerOfNew(num, power/2);
    if(power%2 == 0)return ans*ans;
    else return num * ans * ans;
}

int main(){

    cout<<powerOf(2,4)<<endl;
    cout<<powerOfNew(2,4)<<endl;

    return 0;
}