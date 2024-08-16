#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i, int j, vector<int>& v1){
    while(i<=j){
        int temp = v1[i];
     v1[i] = v1[j];
     v1[j] = temp;
     i++;
     j--;
    }
    return;
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
   
   int k = 2;
   // --> rotate
   int n = v1.size();
   if(k>n) k = k % n;
   reversePart(0, n-k, v1);
   reversePart(n-k, n-1, v1);
   reversePart(0, n-1, v1);
   display(v1);
}
