int makeBeautiful(string str) {
    int count1=0,count2=0;
    char s1='0',s2='1';
    string str1 = str;
    for(int i=0;i<str.size();i++)
    {
        if(s1=='0')
        {
            if(str[i]!='1')
            {
                str[i]='1';
                count1++;
            }
            s1='1';
                  
        }
        else
        {
            if(str[i]!='0')
            {
                str[i]='0';
                count1++;
            }
            s1='0';

        }

        
    }

    for(int i=0;i<str1.size();i++)
    {
        if(s2=='1')
        {
            if(str1[i]!='0')
            {
                str1[i]='0';
                count2++;
            }
            s2='0';
                  
        }
        else
        {
            if(str1[i]!='1')
            {
                str1[i]='1';
                count2++;
            }
            s2='1';

        }


        
    }
    if(count1>count2)
    {
        return count2;
    }
    else
    {
        return count1;
    }
    
    

}
