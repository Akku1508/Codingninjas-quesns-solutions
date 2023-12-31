void prefixSum(int arr[],int n,int output[]){
    for(int i=0;i<n;i++)
    {
        int s=0;
        for(int j=0;j<=i;j++)
        {
            s+=arr[j];
        }
        output[i]=s;
    }

}
