#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  float b, g, t;
  
  cin >> b >> g;
  while(b!=-1 and g!=-1)
	{
	  if (g>b)
		{
		  t = g;
		  g = b;
		  b = t;
		}
	  cout << (int)ceil(b/(g+1.0)) << endl; 
	  cin >> b >> g;
	}
}
