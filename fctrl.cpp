#include <iostream>
using namespace std;

int main ()
{
  int tc,n,s,fp,v;
  
  cin >> tc;
  while(tc--)
	{
	  s  = 0;
	  fp = 5;

	  cin >> n;
	  while((v=n/fp))
		{
		  s += v;
		  fp *= 5;
		}
	  cout << s << endl;
	}
}
