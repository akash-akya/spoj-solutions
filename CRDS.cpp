#include <iostream>

using namespace std;

int main()
{
  long long int n, tc;  
  
  cin >> tc;
  while (tc--)
	{
	  cin >> n;
	  if (n&01)
		cout << (((3*n+1)/2)*n)%1000007 << endl;
	  else
		cout << ((3*n+1)*n/2)%1000007 << endl;
	}
}
