void removeAllOccurrencesOfChar(string input, char c) 
{
    string output;
    output.resize(input.size());
    int i=0;
    for(char ch:input)
    {
        if(ch!=c)
        {
            output[i++]=ch;
        }
    }
    output.resize(i);
    cout<<output;
    
}
