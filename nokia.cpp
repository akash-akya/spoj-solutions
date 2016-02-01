#include <iostream>
#include <cstdio>
#include <iomanip>
#include <sstream>

using namespace std;

int main()
{
  int ns, f;
  double m,v;
  
  cin >> ns;

  int s[ns],c[ns];
	
  for (int i=0; i<ns; i++)
	cin >> s[i];

  for (int i=0; i<ns; i++)
	cin >> c[i];

  cin >> f;

  m = (double)s[0]/c[0];
  int min=0;
  for (int i=1; i < ns; i++)
	{
	  v = (double)s[i]/c[i];
	  if (m<v)
		{
		  m = v;    
		  min = i;
		}
	}


  cout << s[min]/(long double)c[min] << endl;
  std::ostringstream strs;
  strs << setprecision(4) << f*m;
  std::string str = strs.str();

  // printf("%.3lf", f*m)
	;
  // cout << fixed << setprecision(4) << fixed << f/(long double)c[min]*(long double)s[min] << endl;

}
