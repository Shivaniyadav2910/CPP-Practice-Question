#include<iostream>
using namespace std;

int main(){
    float a,b;
    cin>>a>>b;

    char n;
    cin>>n;
    for(int i=1; i<=5; i++){
      switch(n){
      case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
             cout<<a*b<<endl;
             break;
        case '/':
             cout<<a/b<<endl;
             break;
        default:
             cout<<"ERROR"<<endl;
    }
    }       
    return 0;
}