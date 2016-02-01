#include <iostream>
using namespace std;


int main()
{
  int tc;
  long long int sum, t3, tl3, d, a, n, term;

  cin >> tc;
  while (tc--)
	{
	  cin >> t3 >> tl3 >> sum;
	  
	  n = (sum<<1)/(t3+tl3);
	  cout << n << endl;
	  d = (tl3-t3)/(n-5);
	  a = t3 - (d<<1);

	  term = a;
	  for(int i=0; i<n-1; i++, term+=d)
		  cout << term << " ";
	  cout << term << endl; 
	}
  
  return 0;
}
