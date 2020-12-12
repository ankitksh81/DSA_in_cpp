int binarySearch(int arr[], int key)
{
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = n - 1;
    int mid = (low + high) / 2;

    while (low <= high)
    {
        if (arr[mid] < key)
            high = mid - 1;
        else if (arr[mid] > key)
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
}