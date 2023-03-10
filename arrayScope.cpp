#include<iostream>
using namespace std;
void update(int arr[],int n){
    cout<<"inside the function "<<endl;
      

      arr[0]=120;
    //printing the array
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Going back to main funcrion"<<endl;
}

int main(){
    int arr[3]={1,2,3};
    update(arr,3);   
    
cout<<"printing to main funcrion"<<endl;
     //printing the array
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}