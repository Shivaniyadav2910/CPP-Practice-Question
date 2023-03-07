#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float base,exponant,result;
    cout<<"enter base exponant";
    cin>>base>>exponant;
    result=pow(base,exponant);
    cout<<base<<"^"<<exponant<<"="<<result;
    return 0;
}