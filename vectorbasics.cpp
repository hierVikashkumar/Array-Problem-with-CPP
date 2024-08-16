#include<iostream>
#include<vector>
using namespace std;
int main(){
    // /-->inserting / input do not use []
    // vector<int> v; // you need not mention the size
    // v.push_back(4);
    // v.push_back(2);
    // v.push_back(5);
    // v.push_back(9);
    // v.push_back(7);

    // -->if you want to update / access
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4]<<" ";


    //  -->2nd method size
    // vector<int> v; // you need not mention the size
    // v.push_back(4);
    // cout<<v.size()<<endl;
    // v.push_back(2);
    // cout<<v.size()<<endl;
    // v.push_back(5);
    // cout<<v.size()<<endl;
    // v.push_back(9);
    // cout<<v.size()<<endl;
    // v.push_back(7);
    // cout<<v.size()<<endl;


    //  -->3nd method capacity
    vector<int> v; // you need not mention the size
    v.push_back(4);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(7);
    cout<<v.capacity()<<endl;


}