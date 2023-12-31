
bool checkPalindrome(string str) {
    int n=str.size();
    bool flag=true;
    for(int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1])
        {
            flag =false;
            return flag;
        }
    }
    return flag;
}
