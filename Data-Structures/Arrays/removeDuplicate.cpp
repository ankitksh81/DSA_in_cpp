// This program removes duplicates from a sorted array.
#include <iostream>
using namespace std;

int remove(int arr[], int n){
    int res = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main(){
    int arr[] = {10,20,20,30,30,30,40};
    int n = 7;
    int res = remove(arr, n);
    cout << "New array is: ";
    for(int i = 0; i < res; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}