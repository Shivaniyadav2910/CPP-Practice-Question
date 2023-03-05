#include<iostream>
using namespace std;

int main(){
    int a=5,b=10,temp;
    cout<<"before swapping"<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;
    // temp=a;
    // a=b;
    // b=temp;
   
   //without temp variable
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swpapping"<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;
    return 0;
}