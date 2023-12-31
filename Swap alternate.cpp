void swapAlternate(int arr[], int size)
{
    int i=0,temp;
    int j=1;
    while(j<size)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i=j+1;
        j=i+1;
    }
    
}
