class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    long long int first = INT_MIN;
	    long long int second = INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>first)
	        {
	            second = first;
	            first = arr[i];

	        }
	        else if(arr[i]<first && arr[i]>second)
	        {
	            second = arr[i];
	        }
	    }
	    if(second == INT_MIN)
	    {
	        return -1;
	    }
	    else return second;
	}
};
