void removeConsecutiveDuplicates(char input[]) {
    int len=strlen(input),p=0;
    
    char output[1000000];
    char k=input[0];
    for(int i=1;i<len;i++)
    {
        if(k!=input[i])
        {
            output[p]=k;
            k=input[i];
            p++;
        }
    }
    output[p++]=k;
    output[p]='\0';
    strcpy(input,output);

}
