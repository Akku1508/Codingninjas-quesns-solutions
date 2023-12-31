int missingNumber(int arr[], int n)
{
    /*int end=n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<end;j++){
          if (arr[j] >= arr[j + 1]) {
            int k = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = k;
          }
        }
        end--;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i)
        {
            return i;
        }
    }*/
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int expected_sum=(n*(n+1))/2;
    return expected_sum-sum;  
}
