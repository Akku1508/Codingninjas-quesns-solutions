char highestOccurringChar(char input[]) {
    int len=strlen(input);
    int freqarr[256]={0};
    for(int i=0;i<len;i++)
    {
        int k=input[i];
        freqarr[k]++;
    }
    int max=0;
    char result; 
    for(int j=0;j<256;j++)
    {
        if(max<freqarr[j])
        {
            max=freqarr[j];
            result=(char)j;
        }

    }
    
    return result;
}
