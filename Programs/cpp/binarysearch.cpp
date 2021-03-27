// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main ()
{
  // Write C++ code here
  int a[10], n, key;
  cout << "Enter the number of elements" << endl;
  cin >> n;
  int low = 0, high = n - 1, mid;
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
  cout << "Your array" << endl;
  for (int i = 0; i < n; i++)
    {
      cout << a[i];
    }
  cout << endl;
  cout << "Enter the search element";
  cin >> key;
  while (low <= high)
    {
      mid = (low + high) / 2;
      if (key == a[mid])
	    {
	      cout << "key found at " << mid << endl;
	      return 0;

	    }
      else if (key < a[mid])
	    {
	      high = mid - 1;
	    }
      else
	      low = mid + 1;
    }
  cout << "key not found";
  return 0;
}
