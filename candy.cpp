#include <iostream>

using namespace std;

int main()
{
  long long total, moves, avg;
  int tc;
  
  cin >> tc;
  while(tc!=-1)
	{
	  int candies[tc+1];
 
	  total = 0;
	  
	  for(int i=0; i<tc; i++)
		{
		  cin >> candies[i];
		  total += candies[i];
		}

	  if (total%tc == 0)
		{
		  avg = total/tc;
		  moves = 0;
		  for(int j=0; j<tc; j++)
			if (candies[j]<avg)
			  moves += avg-candies[j];
		  cout << moves << endl;
		}
	  else
		  cout << -1 << endl;

	  cin >> tc;
	}
}
