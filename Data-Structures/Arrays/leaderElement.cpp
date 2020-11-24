/*
    A leader element is an element which does not have a larger element on right side of it.
*/

#include <bits/stdc++.h>
using namespace std;

void leader(int arr[], int n){
    int curr = arr[n-1];
    cout << curr << " ";
    for(int i = n-2; i >= 0; i--){
        if(arr[i] > curr){
            curr = arr[i];
            cout << curr << " ";
        }
    }
}

int main(){
    int arr[] = {2, 10, 4, 6, 5, 2};
    int n = 6;
    leader(arr, n);
}