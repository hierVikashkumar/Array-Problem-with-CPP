#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    // input
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    
    int count = 0;
    for(int i=0; i<=n-1; i++){
        if(arr[i]>n) count++;
    }
    cout<<count;
    }
}
