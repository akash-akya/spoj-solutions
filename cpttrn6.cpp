#include <iostream>

using namespace std;

int main()
{
  int tc, col, row, h, w;
  int r,c;

  cin >> tc;
  while(tc--)
	{
	  cin >> row >> col >> h >> w;

	  row += 1;
	  col += 1;
	  h += 1;
	  w += 1;	  
	  
	  for (int k=0; k<row*h-1; k++)
		{
		  r = k%h+1;

		  for (int j=0; j<col*w-1; j++)
			{
			  c = j%w+1;
				  
			  if(c == w && r == h)
				cout << "+";
			  else if(c == w)
				cout << "|";
			  else if(r == h)
				cout << "-";
			  else
				cout << ".";
			}
		  cout << endl;
		}

	  cout << endl;
	}
}
