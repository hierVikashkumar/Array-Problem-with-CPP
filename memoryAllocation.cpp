#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<&arr<<endl;  //  --> array ke address index ke 1st element ka address hota hai
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;

    // address allocatoin
    // 0x62803ffe50   --> array ke address index ke 1st element ka address hota hai
    // 0x62803ffe50
    // 0x62803ffe54
    // 0x62803ffe58
    // 0x62803ffe5c
    // 0x62803ffe60
}