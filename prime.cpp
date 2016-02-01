#include <iostream>
#include <cmath>

#define tr(c,i) for(auto i=(c).begin(); i!=(c).end(); i++)

using namespace std;

int main()
{
  int tc;
  int primes[100000];
  int top=0;

  primes[0] = 2;
  
  cin >> tc;

  for (int i = 3; i<= 100000; i++)
	{
	  int j=0;
	  while(j<=top)
		{
		  if (i% primes[j] == 0)
			break;
		  j++;
		}
		  
	  if(j > top)
		  primes[++top] = i;
	}
    
  while(tc--)
  	{
  	  int start, end;
  	  cin >> start >> end;

	  start = (start>1) ? start : start+1;
  	  while(start <= end)
  		{
  		  int j=0;
  		  while(primes[j] <= sqrt(start))
  			{
  			  if (start % primes[j] == 0)
  				break;
  			  j++;
  			}
			  
  		  if(primes[j] > sqrt(start))
  			cout << start << endl;
		  start++;
  		}
	  
  	  cout << endl;
  	}
}
