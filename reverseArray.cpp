#include<iostream>
using namespace std;
int main(){
    // --> reverse
    display(v);
    int i = 0;
    int j = v.size()-1;
    while(i<=j){
        // swap v[i] and v[]
        int temp = v [i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        J--;
    }
    display(v);
}