//this program implements search operations in an unsorted array//

#include<bits/stdc++.h> 
using namespace std; 
int search(int arr[], int n, 
				int key) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		if (arr[i] == key) 
			return i; 

	return -1; 
} 

int main() 
{ 
	int n;
  cout<<"Enter the number of elemnts"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter the array elements"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  } 
	int key;
  cout<<"Enter the element to be searched";
  cin>>key;
	int flag = search(arr, n, key); 

	if (flag == - 1) 
		cout << "Element not found"; 
	else
		cout << "Element Found at Position: "<<flag + 1; 

	return 0; 
} 














