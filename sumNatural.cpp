#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"enter a possitive integer";
    cin>>n;

    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<"sum="<<sum;
    return 0;
}