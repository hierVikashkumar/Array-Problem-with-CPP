#include<iostream>
using namespace std;
void display(int a[], int size){
    for(int i=0; i<=size-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[], int size){
    b[2] = 50;
}
int main(){
    int arr[5] = {1,4,2,7,47};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    // accessing the elements  of arry in another function
    // update, pass by value  / reference ?
    display(arr, size);
    change(arr, size);
    display(arr, size);
}