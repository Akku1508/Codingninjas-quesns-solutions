int binarySearchClosest(int arr[], int left, int right, int target)
{
    int mid,closestIndex=-1;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(arr[mid]==target)
        {
            return mid;        
        }
        else if(arr[mid]>target)
        {
            right=mid-1;
        }
        else{
            left=mid+1;
        }
        if (closestIndex == -1 || abs(arr[mid] - target) < abs(arr[closestIndex] - target)) {
            closestIndex = mid;
        }

    }
    return closestIndex;
}
