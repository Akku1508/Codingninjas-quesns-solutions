void transpose(int row,int col,int input[][1001]) {
    int transpose_matrix[col][row];
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            transpose_matrix[j][i]=input[i][j];
            
        }
    }
    for(int k=0;k<col;k++)
    {
        for(int l=0;l<row;l++)
        {
            cout<<transpose_matrix[k][l]<<" ";
        }
        cout<<endl;
    }        
}
