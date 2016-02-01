#include <iostream>

using namespace std;

int main()
{
  int tc, col, row, h, w;
  
  cin >> tc;

  while(tc--)
	{
	  cin >> row >> col >> h >> w;
	  h+=1;
	  w+=1;
	  
	  for (int k=0; k<=row*h; k++)
		{
		  for (int j=0; j<=col*w; j++)
			if(k%h==0 || j%w==0)
			  cout << "*";
			else
			  cout << ".";
		  cout << endl;
		}
	   cout << endl;
	}
}
