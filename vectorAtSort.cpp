#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    vector<int> v;
    v.push_back(9);
    v.push_back(6);
    v.push_back(4);
    v.push_back(2);
    v.push_back(7);
    // v.at(2) = 84; // update
    // cout<<v.at(2); // display the updated value of element at index

    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    } 
    cout<<endl;
    // sort
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    } 
    cout<<endl;
}