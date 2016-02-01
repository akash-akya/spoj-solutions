#include <iostream>

using namespace std;

int main()
{
  long long int n, tc;
  bool flag;
  
  cin >> tc;
  while(tc--)
	{
	  cin >> n;
	  for(int i=1; i<=n; i++)
		{
		  flag = true;
		  if (i%3 == 0)
			{
			  cout << "Fizz";
			  flag = false;
			}
		  if (i%5 == 0)
			{
			  cout << "Buzz";
			  flag = false;
			}

		  if (flag)
			cout << i << endl;
		  else
			cout << endl;
		}
	}
}
