#include <stdio.h>
#include <limits.h>


typedef struct
{
  int v;
  int w;
} Pb;

int main ()
{
  int tc;
  long long dp[10050];
  int e, f;
  int i, j, n;
  int w, v; 
  Pb  ar[510];
  
  scanf ("%d", &tc);
  while (tc--)
	{
	  scanf ("%d%d", &e, &f);

	  scanf("%d", &n);
	  for (i=0; i < n; i++)
		scanf("%d %d", &ar[i].v, &ar[i].w);

	  for (i=0; i <= (f-e); i++)
		dp[i] = 1e15;
	  dp[0] = 0;

	  for (i=0; i<n; i++)
		{
		  for (j=1; j<=(f-e); j++)
			{
			  w = ar[i].w;
			  v = ar[i].v;

			  if (j>=w)
				{
				  if (dp[j-w] < 1e15 && dp[j] > (dp[j-w]+v))
					{
					  // printf("%d - %d\n", dp[j], (dp[j-w]+v));
					  dp[j] = dp[j-w]+v;
					}
				}
			}
		}

	  // for (i=0; i <= n; i++)
	  // 	printf ("%d ", dp[i]);

	  if (dp[f-e] >= 1e15)
		printf ("This is impossible.\n");
	  else		
		printf ("The minimum amount of money in the piggy-bank is %lld.\n", dp[f-e]);

	}
    
  return 0;
}
