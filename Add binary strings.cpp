string addBinaryString(string &a, string &b, int n, int m)
{
    string res="";
    int sum,d,c=0;
    int i=n-1,j=m-1;
    while(i>=0||j>=0)
    {
        int d1= 0 ;
        if(i>=0) //  check because the length of both strings can also be different
        
            d1 = a[i]-'0';
        int d2=0;
        if(j>=0)  // check because the length of both strings can also be different
            d2 = b[j]-'0';
        sum=d1+d2+c;
        d=sum%2;
        c=sum/2;
        char k=d+'0';
        res.insert(res.begin(),k);
        i--,j--;
    }
    if(c>0)
    {
        char r=c+'0';
        // res.insert(res.begin(),c);
        res.insert(res.begin(),r);
    }
    return res;
}
