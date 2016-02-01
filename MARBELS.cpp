#include <bits/stdc++.h>
// #define long long int long long int

using namespace std;

long long int ncr (long long int n, long long int r)
{
  long long int res=1;
  long long int a, b;
  bool *den;

  if (r < n-r)
  	{
  	  a = n-r;
  	  b = r;
  	}
  else
  	{
  	  a = r;
  	  b = n-r;
  	}

  den = new bool[b+1];
  fill (den, den+b+1, false);
  
  // cout << n << " " << r << endl;
	
  for (int i=n; i > a; i--)
	{
	  res *= i;
	  // cout << " *" << i;
	  for (int j=2; j<=b; j++)
		{
		  if ((!den[j]) && res%j == 0)
			{
			  res /= j;
			  den[j] = true;
			  // cout << " /" << j;
			}
		}
	}

  
  for (int j=2; j<=b; j++)
	{
	  if ((!den[j]) && res%j == 0)
		{
		  res /= j;
		  den[j] = true;
		  // cout << " /" << j;
		}
	}

  delete den;
  return res;
}

int main()
{
  int tc;
  long long int n, k;

  std::ios::sync_with_stdio(false);

  cin >> tc;
  while (tc--)
	{
	  cin >> n >> k;
	  // n--;
	  // k--;
	  // // k -= n;
	  // a  = n+k-1;
	  cout << ncr(n-1,k-1) << endl;
	}

  return 0;
}
