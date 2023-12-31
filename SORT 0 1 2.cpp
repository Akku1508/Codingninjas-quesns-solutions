void sort012(int arr[], int n)
{
    int i=0,nz=0,nt=n-1;
    while(i<=nt){
        if(arr[i]==0)
        {
            arr[i]=arr[nz];
            arr[nz]=0;
            nz++;
            i++;    
        }
        else if(arr[i]==2)
        {
            arr[i]=arr[nt];
            arr[nt]=2;
            nt--;
        }
        else
        {
            i++;
        }
    }
       
}
