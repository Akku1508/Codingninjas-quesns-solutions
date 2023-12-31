void correspondingPairSum(int arr[],int n,int output[]){
   int i=0;
   int j=n-1;
   int k=0;
   while (i < j) {
    output[k] = arr[i] + arr[j];
    k++;
    i++;
    j--;
    }
}
