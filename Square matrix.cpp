void squareMatrix(int n,int arr[][100],int output[]){
    //100 is just the upper limit, you just have to access till n
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                output[k]=arr[i][j];
                k++;
            }
        }
    }
    

}
