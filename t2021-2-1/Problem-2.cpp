#include<iostream>
using namespace std;

int main ()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
    {
      int count = 1;
      for (int j = 1; j < i; j++)
	{
	  cout << count << ",";
	  count += 2;
	}
      cout << count;
      cout << endl;
    }
  return 0;
}
