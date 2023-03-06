#include<iostream>
using namespace std;

int main(){
    float n1,n2,n3;
    cout<<"enter a number";

    cin>>n1>>n2>>n3;
    if((n1>=n2)&&(n1>=n3)){
        cout<<"largest numbers"<<n1;
    }else if((n2>=n1)&&(n2>=n3)){
          cout<<"largest number"<<n2;
    }else{
          cout<<"largest number"<<n3;
    }
    return 0;
}