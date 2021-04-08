int MissingNumber(vector<int>& array, int n) {
   int sn = (n*(n+1))/2;
   int sum = 0;
   int i;
    for(i=0;i<n-1;i++)
    {
     sum = sum + array[i];   
    }
    int total = sn - sum;
    return total;
}
