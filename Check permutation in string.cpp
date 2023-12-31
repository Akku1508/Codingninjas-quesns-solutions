#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
        if (str1.size()!=str2.size())
        {
            return 0;
        }
        
        for(int i=0;i<str1.size();i++)
        {
            int flag=1;
            for(int j=0;j<str2.size();j++)
            {
                    if(str1[i]==str2[j])
                    {
                        flag=0;
                    }
            }
            if(flag==1)
            {
                return 0;
            }
        }
        return 1;
}
