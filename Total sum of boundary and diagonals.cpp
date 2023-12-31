int totalSum(int input[][501], int n)
{
    int sum=0;
    for(int i=1;i<n-1;i++)
    {
        sum+=input[0][i];
        sum+=input[n-1][i];
    }
    for(int i=1;i<n-1;i++)
    {
        sum+=input[i][0];
        sum+=input[i][n-1];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum+=input[i][j];
            }
        }
    }
    int k=0,l=n-1;
   for(int i=0;i<n;i++)
    {
        sum += input[k][l];
        k++;
        l--;
    }
    if(n%2!=0)
    {
        sum-=input[n/2][n/2];
    }
    return sum;
}
