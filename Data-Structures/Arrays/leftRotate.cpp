// This program rotates an array towards left by d places.
// This requires a O(1) auxillary space

#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int l, int h){
    while(l < h){
        swap(arr[l], arr[h]);
        l++;
        h--;
    }
}

void leftRotate(int arr[], int n, int d){
    reverseArr(arr, 0, d-1);
    reverseArr(arr, d, n-1);
    reverseArr(arr, 0, n-1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int d = 2;
    leftRotate(arr, n, d);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}