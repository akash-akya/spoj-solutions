#include <bits/stdc++.h>
using namespace std;

int a[2000];
int c[2000][2000];
int n;

int max_profit (int s, int e)
{
  if (s>e)
	return 0;

  if (c[s][e] != -1)
	return c[s][e];

  int y = n - (e-s+1) +1;
  return c[s][e] = max (max_profit(s+1, e) + y*a[s],
			  max_profit(s, e-1) + y*a[e]);  
}


int main()
{
  int i,j;
  
  scanf ("%d", &n);
  for (i=0; i<n; i++)
	scanf ("%d", &a[i]);

  for (i=0; i<n; i++)
	for(j=0; j<n; j++)
	  c[i][j] = -1;
  
  printf ("%d\n", max_profit(0, n-1));
  return 0;
}
