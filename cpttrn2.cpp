#include <iostream>

using namespace std;

int main()
{
  int tc, col, row;
  
  cin >> tc;

  while(tc--)
	{
	  cin >> row >> col;
	  for (int k=1; k<=row; k++)
		{
		  for (int j=1; j<=col; j++)
			  cout << ((k==1   || j==1 ||
						k==row || j==col)? "*" : ".");
		  cout << endl;
		}
	   cout << endl;
	}
}
