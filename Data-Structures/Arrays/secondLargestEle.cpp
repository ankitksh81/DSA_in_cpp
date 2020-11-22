// This program returns the index of second largest element in the array.
#include <iostream>
using namespace std;

// Function to get index of 2nd largest element.
int secLargest(int arr[], int n){
    int res = -1, largest = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest]){
            if(res == -1 || arr[i] > arr[res]){
                res = i;
            }
        }
    }
    return res;
}

int main(){
    int arr[] = {10, 8, 9, 3};
    int n = 4;
    cout << "Second largest element at index: " << secLargest(arr, n) << endl;
}
