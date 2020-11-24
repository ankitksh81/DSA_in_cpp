// Maximum difference between any two elements in an array. a[j] - a[i] for j > i

#include <bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int n){
    //return (*max_element(arr, arr+n) - *min_element(arr, arr+n));
    int minVal = arr[0];
    int maxDif = arr[1]-arr[0];
    for(int i = 1; i < n; i++){
        maxDif = max(maxDif, arr[i]-minVal);
         minVal = min(minVal, arr[i]);
    }
    return maxDif;
}

int main(){
    int arr[] = {2,4,6,2,1,6};
    int n = 6;
    cout << maxDiff(arr, n);
    return 0;
}