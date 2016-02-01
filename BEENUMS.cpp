#include <iostream>

using namespace std;

int main()
{
  long long int n, v, i;
  
  cin >> n;
  while (n != -1)
	{
	  if ((n-1)%3 == 0)
		{
		  v = (n-1)/3;
		  i = 0;

		  while (i*(i+1) < v)
			i++;

		  if (i*(i+1) == v)
			cout << "Y" << endl;
		  else
			cout << "N" << endl;
		}
	  else
		cout << "N" << endl;

	  cin >> n;
	}
}
