int countWords(string str) {
	int n=str.size();
	int count=0;
	for(int i=0;i<=n;i++)
	{
		if((str[i]==' ')|| (str[i]=='\0'))
		{
			count++;
		}
	}
	return count;
}
