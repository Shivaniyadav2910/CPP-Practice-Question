#include<iostream>
using namespace std;

void solid_rectangle(int n,int m){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<"*";
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
    solid_rectangle(row,column);

}