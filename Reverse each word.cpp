void reverseEachWord(char input[]) {
   int len=strlen(input); 
   int start=0;
   for(int i=0;i<=len;i++)
   {
       if((input[i]==' ')||(input[i]=='\0'))
       {
           int end=i-1;
           while(start<end)
           {
               char temp=input[start];
               input[start]=input[end];
               input[end]=temp;
               end--;
               start++;
           }
           start=i+1;
       }
   }
}
