// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {3,4,10,11}
//     int size = sizeof(arr)/sizeof(arr[0]);
     
//      int sum = 0;
//      for(int i=0; i<4; i++){
//         sum=arr[i];
//      }
//      cout<<sum<<endl;
//      return 0;
// }/


#include<iostream>
using namespace std;

int main() {
    int arr[] = {3, 4, 10, 11};  // Corrected: added semicolon
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
     
    int sum = 0;
    for(int i = 0; i < size; i++) {  // Use 'size' variable in the loop condition
        sum += arr[i];  // Corrected: add each element to sum
    }
    cout << sum << endl;  // Print the sum of the elements
    return 0;
}

