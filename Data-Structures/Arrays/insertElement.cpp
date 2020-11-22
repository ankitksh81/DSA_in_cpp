// This program inserts an element at a given pos.
#include <iostream>
using namespace std;
// function to insert element
int ins(int arr[], int n, int cap, int x, int pos){
    if(n == cap)
        return n;
    for(int i = n-1; i >= pos-1; i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = x;
    return (n+1);
}

int main(){
    int arr[5];
    int cap = 5, n = 4;
    arr[0] = 1; arr[1] = 2; arr[2] = 3; arr[3] = 4;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int x = 7;
    n = ins(arr, n, cap, x, 5);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

