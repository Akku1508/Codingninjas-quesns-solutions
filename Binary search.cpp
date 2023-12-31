int binarySearch(int nums[], int left, int right, int target) {
    int mid;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(target==nums[mid])
        {
            return mid;
        }
        else if(nums[mid]>target)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return -1;
}
