void bubbleSort(int arr[], int n) 
{
    for(int i=0;i<n-1;i++)
    {
        int j=0,end=n-1-i;
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
    }
}
