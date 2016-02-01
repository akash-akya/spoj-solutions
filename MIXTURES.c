#include <stdio.h>
#include <limits.h>

int sum (int a[], int i, int len)
{
  int k, s=0;
  for (k=i; k<i+len; k++)
	s += a[k];
  return s%100;
}

int main()
{
  int n;
  int a[101];
  // row-> length    col->ith position
  int dp[101][101];
  int i, j, k, m, ln;

  while (scanf ("%d", &n) != EOF)
	{
	  for (i=0; i < n; i++)
		scanf("%d", &a[i]);

	  for (i=0; i<=n; i++)
		dp[1][i] = dp[0][i] = 0;

	  for(ln=2; ln<=n; ln++)
		{
		  for (j=0; j<=n-ln; j++)
			{
			  dp[ln][j] = INT_MAX;
			  for (k = 1; k < ln; k++)
				{
				  m = dp[k][j] + dp[ln-k][k+j] +
					sum(a, j, k) * sum(a, j+k, ln-k);

				  if (m < dp[ln][j])
					dp[ln][j] = m;
				}
			}
		}
	  printf("%d\n", dp[n][0]);
	}

  return 0;
}


