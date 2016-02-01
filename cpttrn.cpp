#include <iostream>

using namespace std;

int main()
{
  int tc, col, row;
  
  cin >> tc;

  while(tc--)
	{
	  cin >> row >> col;
	  for (int k=0; k<row; k++)
		{
		  for (int j=0; j<col; j++)
			  cout << ((k+j)%2 == 0? "*" : ".");
		  cout << endl;
		}
	   cout << endl;
	}
}
