long long int floorSqrt(long long int N) {
    if(N<=0 || N == 1)
    {
        return N;
    }
    long long int end=N-1,prod,mid,start=2;
    while(start<=end)
    {
        mid=(end+start)/2;
        
        if(mid <= (N/mid)){

            start = mid+1;
        }
        else{
            end = mid-1;
        }
        // prod=mid*mid;
        // if(prod==N)
        // {
        //     return mid;
        // }
        // else if(prod>N)
        // {
        //     end=mid-1;    
        // }
        // else
        // {
        //     start=mid+1;
        // }
    }
    return end;

    
}
