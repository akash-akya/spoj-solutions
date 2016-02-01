#include <bits/stdc++.h>
using namespace std;

typedef struct
{
  int a;
  int v;
}Item;

int main()
{
  int ma;
  int i, j, a, v;
  Item dp[300][600];
  int n;
  Item inp[300];
  
  scanf ("%d%d", &ma, &n);
  while (!(ma==0 and n==0))
	{
	  for (i=1; i<=n; i++)
		scanf ("%d%d", &(inp[i].a), &(inp[i].v));

	  for (i=0; i<=ma; i++)
		{
		  dp[0][i].v = 0;
		  dp[0][i].a = 0;
		}

	  for (i=1; i<=n; i++)
		{
		  dp[i][0].v = 0;
		  dp[i][0].a = 0;
		  
		  for (j=1; j<=ma; j++)
			{
			  a = inp[i].a;
			  v = inp[i].v;

			  if (a<=j)
				{
				  if (dp[i-1][j].v < dp[i-1][j-a].v + v)
					{
					  dp[i][j].v = dp[i-1][j-a].v + v;
					  dp[i][j].a = dp[i-1][j-a].a + a;
					}
				  else if (dp[i-1][j].v == dp[i-1][j-a].v + v)
					{
					  if (dp[i-1][j].a > dp[i-1][j-a].a + a)
						{
						  dp[i][j].v = dp[i-1][j-a].v + v;
						  dp[i][j].a = dp[i-1][j-a].a + a;
						}
					  else
						{
						  dp[i][j].v = dp[i-1][j].v;
						  dp[i][j].a = dp[i-1][j].a;
						}
					}
				  else
					dp[i][j] = dp[i-1][j];
				}
			  else
				dp[i][j] = dp[i-1][j];
			}
		}

	  printf ("%d %d\n", dp[n][ma].a, dp[n][ma].v);

	  scanf ("%d%d", &ma, &n);
	}
  
  return 0;
}
