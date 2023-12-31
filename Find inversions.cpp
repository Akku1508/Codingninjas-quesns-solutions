int getInversions(int arr[], int n)
{
  int start=0,min,min_index,inversion=0;
  for (int i = start; i <= n - 1; i++) 
  {
        min=arr[i];
        min_index=i;
        for(int j=i+1;j<=n-1;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                min_index=j;

            }
        }
        int k=arr[i];
        arr[i]=min;
        arr[min_index]=k;
        inversion+=min_index-i;
    }
    return inversion;
}
