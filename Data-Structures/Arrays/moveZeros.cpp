// This program moves all zeros to the end.
#include <iostream>
using namespace std;

void move(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {8,5,0,10,0,2};
    int n = 6;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    move(arr, n);
    return 0;
}
