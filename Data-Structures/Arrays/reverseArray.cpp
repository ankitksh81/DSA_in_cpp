// This program will reverse an array.
#include <iostream>
using namespace std;

// Function to reverse an array.
void reverse(int arr[], int n){
    int start = 0, end = n-1;
    int temp;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    reverse(arr, n);
    return 0;
}