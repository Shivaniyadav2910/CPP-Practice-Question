#include<iostream>
using namespace std;
 void hollow_rectangle(int n,int m){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i==1|| i==n|| j==1||j==m)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
 }
int main(){
    
    int row,column;
    cout<<"enter the number of rows";
    cin>>row;
    cout<<"enter the number of columns";
     cin>>column;
    hollow_rectangle(row,column);
    return 0;
}