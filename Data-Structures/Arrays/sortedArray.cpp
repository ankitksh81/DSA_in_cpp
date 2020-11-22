#include <iostream>
using namespace std;

bool sorted(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[] = {10, 20, 20, 40};
    int n = 4;
    if(sorted(arr, n)){
        cout << "Sorted" << endl;
    }
    else {
        cout << "Unsorted" << endl;
    }
    return 0;
}