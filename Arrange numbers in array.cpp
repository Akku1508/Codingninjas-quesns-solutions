void arrange(int arr[], int n)
{
    
    int idx = 0; // for index of arr..

    for(int i = 1 ; i<=n ; i = i+2)
    {
        arr[idx]=i;
        idx++;
    }
    if(n%2==1)n--;
    for(int i =n; i>=2 ;i= i-2)
    {
        arr[idx]=i;
        idx++;
    }
}
