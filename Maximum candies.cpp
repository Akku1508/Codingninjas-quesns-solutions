void maximum_candy(int n, int arr[],int extraCandies,bool output[]){
   for(int i=0;i<n;i++)
   {
      output[i]=true;
      int max=arr[i]+extraCandies;
      for(int j=0;j<n;j++)
      {
         if(max<arr[j])
         {
            output[i]=false;
         }
      }
   }
}
