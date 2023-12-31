void trimSpaces(char input[]) {
    int n=strlen(input),count=0;
    for(int i=0;i<n;i++){
        if(input[i]==' ')
        {
            count++;
        }
    }
    char output[n-count+1];
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(input[i]!=' ')
        {
            output[k]=input[i];
            k++;

        }
    }
    output[k] = '\0';
    strcpy(input, output);

}
