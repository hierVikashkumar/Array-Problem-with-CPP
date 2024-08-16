#include<iostream>
using namespace std;
int main{
    int n;
    cout<<"Enter the no of student : ";
    cin>>n;
    int arr[n];
    // input
    for(int i=0; i<=n-1; i=i+1){
        cin>>arr[i];
    }
    // output
    int sum = 0;
    for(int i=0; i<=n-1; i=i+1){
        sum = sum + arr[i];
    }
    cout<<sum;
}