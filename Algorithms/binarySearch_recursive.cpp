// int arr[], global declaration of integer array.

int binarySearch(int arr[], int low, int high, int key)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    // mid = low + (high - low) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        return binarySearch(arr, low, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, high, key);
    }
}