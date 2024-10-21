#include<iostream>
using namespace std;

void update(int *ptr){
    
    *ptr = *ptr +1;    
    
}

int main(){

    int a = 5;
    int *ptr = &a;
    int *ptr2 = ptr;
    cout<<"before"<<*ptr<<endl;
    update(ptr);
    cout<<"after"<<*ptr<<endl;
    cout<<"after"<<a<<endl;

}