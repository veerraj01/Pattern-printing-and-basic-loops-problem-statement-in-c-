#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int row=0;row<n; row= row+1){
        // Half pyramid
        for(int col=0; col<n-row; col= col+1){
            cout<< "*";
        }
        cout<< endl;
    }
    //Space wlaaa full pyramid
    for(int col=0; col<2*row+1; col= col+1){
        cout<< " ";
    }
    //Half pyramid
    for(int col=0; col<n-row; col= col+1){
        cout<< "*";
    }
    cout<< endl;
}
