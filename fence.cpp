#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
  const float pi2 = 2*3.1415926;
  int l;
  
  cout.precision(2);
  
  cin >> l;
  while(l != 0)
	{
	  printf("%0.2f\n",(l*l/pi2));
	  cin >> l;
	}
}
