//program to input and display an array//
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i =0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<"Array elements are: "<<endl;
    for (int i = 0; i <n; i++)
    {
      cout<<arr[i]<<endl;
    }
    return 0;
}
