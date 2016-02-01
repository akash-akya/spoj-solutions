#include <iostream>

using namespace std;


void draw_grid(int s, int f)
{
  char c;
  if (f%2==0)
	c = '\\';
  else
	c = '/';
  
  for(int i=0; i<=s; i++)
	{
	  for(int j=0; j<=s; j++)
		{
		  if(i==j)
			cout << c;
		  else if(i==j)
			cout << "*";
		  else
			cout << ".";
		}
	  cout << endl;
	}
}

int main()
{
  int tc, col, row, s;
  int r,c;
  int rc;
  int cc;
  
  cin >> tc;

  while(tc--)
	{
	  cin >> row >> col >> s;

	  s += 1;
	  
	  for (int k=0; k<row*s; k++)
		{
		  r = k%s;
		  rc = int(k/s+0.5);

		  for (int j=0; j<col*s; j++)
			{
			  if(j%s==0 || k%s==0)
				cout << "*";
			  else
				{
				  c = j%s;
				  cc = int(j/s+0.5);
				  
				  if((rc+cc)%2 == 1 && (c == s-r))
					cout << "/";
				  else if((rc+cc)%2 == 0 && (c == r))
					cout << "\\";
				  else
					cout << ".";
				}
			}
		  cout << "*" << endl;
		}

	  for (int j=0; j<=col*s; j++)
	  	  cout << "*";
	  cout << endl;
	  cout << endl;
	}
}
