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
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // v.pop_back();
    // v.pop_back();
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    
    vector<int> v; // size | capacity
    v.push_back(4); // 1  | 1
    v.push_back(2); // 2 | 2
    v.push_back(5);// 3 | 4
    v.push_back(9);// 4 | 8
    v.push_back(7); // 5 | 8
    v.push_back(4); // 6 | 8
    v.push_back(2); // 7 | 8
    v.push_back(5); // 8 | 8
    v.push_back(9); // 9 | 16
    v.push_back(7); // 10 |16
    v.push_back(4);
    v.push_back(2);
    v.push_back(5);
    v.push_back(9);
    v.push_back(7);
    v.push_back(4);
    v.push_back(2);
    v.push_back(5);
    v.push_back(9);
    v.push_back(7);

    cout<<"Size is : "<<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;

    // v.pop_back();
    // v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<"Size is : "<<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;
}