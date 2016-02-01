#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
  int tc, col, row, s;
  int ts;

  cin >> tc;
  while(tc--)
	{
	  cin >> row >> col >> s;
	  ts = 2*s;
	  
	  for (int k=0; k<row*ts; k++)
		{
		  char row[ts+1];
		  int r = k%(ts);
		  memset(row, '.', ts);

		  if (r < s)
			{
			  row[s-r-1] = '/';
			  row[s+r] = '\\';
			}
		  else
			{
			  row[3*s-r-1] = '/';
			  row[r-s] = '\\';
			}
		  row[ts] = '\0';
		  		  
		  for (int j=0; j<col; j++)
			cout << row;
			
		  cout << endl;
		}

	  cout << endl;
	}
}
