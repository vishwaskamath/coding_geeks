//program to insert element in an unsorted array//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i;
    cout<<"The array eleenmts are: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter the position"<<endl;
    int pos;
    cin >> pos;
    cout<<"Enter the element"<<endl;
    int ele;
    cin >> ele;
    if(pos > n)
    {
        cout << "Invalid Input";
    }
    else
    {
        for (i = n - 1; i >= pos - 1; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = ele;
        cout << "Array after insertion is : "<<endl;
        for (i = 0; i <= n; i++)
            cout << arr[i]<<" ";
    }
    return 0;
}
