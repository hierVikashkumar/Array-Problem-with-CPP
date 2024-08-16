#include<iostream>
using namespace std;
int main(){
    // int marks[7];
    // // input
    // for(int i=0; i<=5; i++){
    //     cin>>marks[i];
    // }

    // for(int i=0; i<=5; i++){
    //     if(marks[i]<35) {
    //         cout<<marks[i]<<" ";
    //     }
    // }

    int n;
    cout<<"Enter the no of student : ";
    cin>>n;
    int marks[n];
    // input
    for(int i=0; i<=n-1; i++){
        cin>>marks[i];
    }

    for(int i=0; i<=n-1; i++){
        if(marks[i]<35) {
            cout<<i<<" ";
        }
    }
    cout<<"passing student";
}