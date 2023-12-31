int findSecondLargest(int arr[], int n)
{
    
    for(int i=0;i<n;i++)
    {
        int j=0,end=n-i-1;
        while(j<end)
        {
            if(arr[j]>arr[j+1])
            {
                int k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
            }
            j++;
        }
        end--;
    }
    return arr[n-2];
}
