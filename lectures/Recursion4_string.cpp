#include<iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseString(string &str, int start = 0){
    int end = str.size()-1-start; //we just made the "end" with the start pointer
    if(start>end) return str;
    swap(str[start], str[end]);
    return reverseString(str, start+1);
}

bool checkPalindrome(string str, int start = 0){
    int end = str.size()-1-start;
    if(start>end) return true;
    if(str[start] != str[end]) return false;
    return checkPalindrome(str, start+1);
}

int main(){

    string str ="abra";

    cout<<"before : ";
    for (int i = 0; i < str.size(); i++)cout<<str[i];
    cout<<endl;

    string newStr = reverseString(str);

    cout<<"after : ";
    for (int i = 0; i < newStr.size(); i++)cout<<newStr[i];
    cout<<endl;

    checkPalindrome(str)?cout<<"Palindrome"<<endl:cout<<"not a Palindrome"<<endl;
    
    return 0;
}