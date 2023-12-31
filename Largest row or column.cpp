int findLargest(int input[][1001], int nRows, int mCols)
{
    int rmaxsum=0;
    for(int i=0;i<nRows;i++)
    {
        int sum=0;
        for(int j=0;j<mCols;j++)
        {
            sum+=input[i][j];
        }
        if(rmaxsum<sum)
        {
            rmaxsum=sum;
        }
    }
    int cmaxsum=0;
    for(int i=0;i<mCols;i++)
    {
        int s=0;
        for(int j=0;j<nRows;j++)
        {
            s+=input[j][i];
        }
        if(cmaxsum<s)
        {
            cmaxsum=s;
        }
    }
    if(rmaxsum<cmaxsum)
    {
        return cmaxsum;
    }
    else{
        return rmaxsum;
    }
}
