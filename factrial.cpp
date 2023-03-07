#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
     long double factorial=1.0;
     if(n<0){
        cout<<"ERRER ! factorial of a negative does'nt exist";
     }else{
        for(int i=1; i<=n; i++){
            factorial*=i;
        }
        cout<<"factorial of"<<n<<"="<<factorial;
     }
    return 0;
}