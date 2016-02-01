#include <iostream>

using namespace std;

int main()
{
  int tc, col, row;
  
  cin >> tc;

  while(tc--)
	{
	  cin >> row >> col;
	  for (int k=0; k<=row*3; k++)
		{
		  for (int j=0; j<=col*3; j++)
			if(k%3==0 || j%3==0)
			  cout << "*";
			else
			  cout << ".";
		  cout << endl;
		}
	   cout << endl;
	}
}
