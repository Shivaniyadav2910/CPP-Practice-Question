#include<iostream>
using namespace std;

int main(){
    int divisor,dividend, remainder,quotient;
    cout<<"Enter dividend";
    cin>>dividend;

    cout<<"divisor";
    cin>>divisor;

    quotient=dividend/divisor;
    remainder=dividend % divisor;

    cout<<quotient<<endl;
    cout<<remainder<<endl;

    return 0;
}