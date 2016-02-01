#include <iostream>

using namespace std;

int main()
{
  int tc;
  int x,y,v;
  int n;
  
  cin >> tc;
  while(tc--)
	{
	  cin >> x >> y;

	  v = x-y;
	  n = -1;

	  if (v==0)
		{
		  if (x&1)
			n = (x<<1)-1;
		  else
			n = (x<<1);
		}
	  else if (v==2)
		{
		  if (x&1)
			n = (x<<1)-3;
		  else
			n = (x<<1)-2;
		}

	  if (n>=0)
		cout << n << endl;
	  else
		cout << "No Number" << endl;
	  
	}
}
