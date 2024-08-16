#include<iostream>
using namespace std;
int main{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    // input
    for(int i=0; i<=n-1; i=i+1){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to search: ";
    cin>>x;
    // output
    // check mark
    bool flag = false;  // flase -> not found
    int sum = 0;
    for(int i=0; i<=n-1; i=i+1){
        if (arr[i] == x) flag = true;
    }
    if(flag==true) cout<<"element found";
    else cout<<"element not found";
}