#include <iostream>

using namespace std;

int main()
{
  int t1, t2, t3;
  int d, r;
 
  
  cin >> t1 >> t2 >> t3;
  while(t1!=0 || t2!=0 || t3!=0)
	{

	  d = t2-t1;
	  if(d == t3-t2)
		{
		  cout << "AP " <<  t3+d << endl;
		}
	  else
		{
		  r = t2/t1;
		  cout << "GP " <<  t3*r << endl;	
		}
		
	  cin >> t1 >> t2 >> t3;
	}
}
