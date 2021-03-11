// C++ program to delete an element in an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[100], position, i, n;
    cout << "Enter the number of elements"; 
    cin >> n;
    cout <<" Input the array elements : ";

    for (i = 0; i < n; i++)
        cin >> array[i];

    cout << "Enter the position :" ;
    cin >> position;

    if (position >= n+1)
        cout << "Not possible";
    else
    {
        for (i = position - 1; i < n - 1; i++)
            array[i] = array[i+1];

        cout << "Array after deletion"<<endl;
        for (i= 0; i < n-1; i++)
            cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
