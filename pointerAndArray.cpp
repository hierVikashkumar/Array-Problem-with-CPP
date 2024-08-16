#include<iostream>
using namespace std;
int main(){
    // int arr[] = {4,2,6,1,7};
    // int* ptr = &arr[0];  // giveing address
    // cout<<ptr<<endl;

    // ptr[0] = 8;
    // for(int i=0; i<=4; i++){
    //     cout<<ptr[i]<<" ";
    // }/

    // 2nd method
    int arr[] = {4,2,6,1,7};
    int* ptr = &arr[0];  // giveing address
    // cout<<ptr<<endl;

    for(int i=0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    *ptr = 8; //  ptr[0] = 8
    ptr++;  // ptr++ --> next index [1] par aa gya
    *ptr = 9;  // ptr[1] = 9  befor value change
    ptr--;  // ptr-- --> befor index[0] par aa jaye 

    for(int i=0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }
    
}