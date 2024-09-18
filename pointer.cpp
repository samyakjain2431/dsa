#include<iostream>
using namespace std;

void update(int *ptr){
    
    *ptr = *ptr +1;    
    
}

int main(){

    int a = 5;
    int *ptr = &a;
    cout<<"before"<<*ptr<<endl;
    update(ptr);
    cout<<"after"<<*ptr<<endl;
    cout<<"after"<<a<<endl;

}