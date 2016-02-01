#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc;
  int min;
  int n, k, i, d;
  int a[20000];
  
  scanf ("%d", &tc);
  while (tc--)
	{
	  scanf ("%d%d", &n, &k);

	  for (i=0; i<n; i++)
		scanf ("%d", &a[i]);

	  if (k == 1)
		{
		  min = 0;
		}
	  else
		{
		  sort (a, a+n);
		  min = (1e+9)+1;
		  for (i=0; i<n-(k-1); i++)
			{
			  d = a[i+(k-1)] - a[i];
			  if (d < min)
				min = d;
			}
		}

	  printf ("%d\n", min);
	  
	}
  return 0;
}
