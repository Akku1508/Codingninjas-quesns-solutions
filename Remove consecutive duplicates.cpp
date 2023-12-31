string removeConsecutiveDuplicates(string str) 
{
    int i=0;
   while(i<str.size())
    {
        int j=i+1;
        while((j<str.size())&&(str[i]==str[j]))
        {
            j++;
        }
        if(j>i+1)
        {
            str.erase(i+1,j-i-1);
        
        }
        else{
            i++;
        }
    }
    return str;
}
