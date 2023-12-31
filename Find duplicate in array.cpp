int findDuplicate(int arr[], int n) {
    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(temp==arr[j])
            {
                return temp;
            }
        }
    }
}
