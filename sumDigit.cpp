#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"enter a integer";
    cin>>n;
    while(n!=0){
     int remainder=n%10;
     sum=sum+remainder;
     n=n/10;
    }
    cout<<"sum="<<sum;
    return 0;
}