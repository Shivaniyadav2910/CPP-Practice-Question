#include<iostream>
using namespace std;

int main(){
    int n,t1=0,t2=1,nextTerm;
    cin>>n;
    cout<<"fibonacci series"<<t1<<","<<t2<<",";
    nextTerm=t1+t2;
    while(nextTerm<=n){
         cout<<nextTerm<<",";
         t1=t2;
         t2=nextTerm;
         nextTerm=t1+t2;

    }

    return 0;
}