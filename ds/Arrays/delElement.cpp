// This program deletes 1st occurance of an element from an array.

#include <iostream>
using namespace std;

int del(int arr[], int x, int n){
    int i;
    for(i = 0; i < n; i++){
        if(arr[i] == x)
            break;
    }
    if(i == n){
        return n;
    }
    for(int j = i; j < n-1; j++){
        arr[j] = arr[j+1];
    }
    return (n-1);
}

int main(){
    // Change the array as per need
    int arr[8] = {1,8,4,3,2,5,6,7};
    for(int i = 0; i < 8; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // Change element to be deleted
    int n = del(arr, 3, 8);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
