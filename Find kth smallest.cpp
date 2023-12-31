int kthSmallest(int arr[], int n, int k) 
{
    for(int i=0;i<n-1;i++)
    {
        int end=n-1-i,j=0;
        while(j<end)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            j++;
        }
    }
    return arr[k-1];

}
