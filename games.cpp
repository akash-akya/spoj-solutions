#include <iostream>
using namespace std;

int main()
{
  int tc;
  double avg,frac;

  cin >> tc;

  while(tc--)
	{
	  cin >> avg;
	  double ofrac;

	  ofrac = avg - (int)avg;
	  
	  int i = 0;
	  do
	  	{
		  i++;
		  frac  = (ofrac * i)+0.00001;
		  frac  = frac - (int)frac;
	  
		} while(frac >= 0.0001);

	  cout << i << endl; 
	}	
}
