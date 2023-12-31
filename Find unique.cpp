


int findUnique(int arr[], int size)
{
   
    for(int i=0;i<size;i++)
    {
        int flag=1;
        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                if(i!=j)
                {
                    flag=0;
                }
            }
            
        }
        if(flag==1)
        {
            return arr[i];
        }
    }
    
}
