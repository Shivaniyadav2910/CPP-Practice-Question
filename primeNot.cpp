#include<iostream>
using namespace std;

int main(){
    int i,n;
    bool isPrime=true;
    cout<<"enter a number";
    cin>>n;
    //o and 1 not a prime number
    if(n==0 || n==1){
        isPrime=false;
    }else{
        for( i=2; i<=n/2; ++i)
        {
            if(n%i==0)
                  isPrime=false;
                  break;
        }
    }
    if(isPrime){
        cout<<n<<"is prime number";
    }else{
        cout<<n<<"is not a prime number";
    }
    return 0;
}