// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main ()
{
  // Write C++ code here
  int a[10], n, key;
  cout << "Enter the number of elements" << endl;
  cin >> n;
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
  for (int i = 0; i < n; i++)
    {
      if (key == a[i])
	{
	  cout << "element found at position " << i << endl;
	  return 0;
	}

    }
  cout << "element not found";
  return 0;
}
