#include <iostream>
using namespace std;

int largest(int arr[], int n){
    int ans = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[ans]){
            ans = i;
        }
    }
    return ans;
}

int main(){
    int arr[] = {40, 8, 50, 100};
    int n = 4;
    cout << "Index of largest element is : " << largest(arr, n) << endl;
    return 0;
}
