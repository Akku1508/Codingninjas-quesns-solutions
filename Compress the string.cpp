string getCompressedString(string &input) {
    string output="";
    for(int i=0;i<input.size();i++)
    {
        output.push_back(input[i]);
        int count=1;
        while(input[i]==input[i+1])
        {
            i=i+1;
            count++;
        }
        
        if(count!=1)
        {
            output.push_back('0'+count);
        }
    }
    return output;
}
