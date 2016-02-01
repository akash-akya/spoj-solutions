#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int t;
  int tc;
  int ng, nm;
  int g_max, m_max;

  cin >> tc;

  while (tc--)
	{
	  cin >> ng >> nm;

	  g_max = 0;
	  m_max = 0;
	  
	  for (int i=0; i<ng; i++)
		{
		  cin >> t;
		  if (t>g_max)
			g_max = t;
		}

	  for (int i=0; i<nm; i++)
		{
		  cin >> t;
		  if (t>m_max)
			m_max = t;
		}

	  if (g_max >= m_max)
		cout << "Godzilla" << endl;
	  else
		cout << "MechaGodzilla" << endl;
		
	}
}
