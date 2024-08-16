#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
   vector<int> v1;
   v1.push_back(1);
   v1.push_back(6);
   v1.push_back(4);
   v1.push_back(2);
   v1.push_back(3);
   v1.push_back(7);
   v1.push_back(4);
   v1.push_back(9);

   display(v1);
// revese
int i = 0;
int j = v1.size()-1;

// --> 1st method using while loop
// while(i<=j){
//     // swap v[i] and v[j]
//     int temp = v1[i];
//     v1[i] = v1[j];
//     v1[j] = temp;
//     i++;
//     j--;
// }
// display(v1);

// --> 2nd method using for loop
for(int  i = 0, j=v1.size()-1; i<=j; i++, j--) {
     int temp = v1[i];
     v1[i] = v1[j];
     v1[j] = temp;
}
display(v1);

// --> 3rd method using inbiled function
// reverse(v1.begin(),v1.end());
// display(v1);
}
