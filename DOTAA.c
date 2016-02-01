#include <stdio.h>

int main()
{
  int tc;
  int n, m, d, i, h, s;

  scanf ("%d", &tc);
  while (tc--)
	{
	  scanf("%d%d%d", &n, &m, &d);

	  s = 0;
	  for (i=0; i < n; i++)
		{
		  scanf("%d", &h);
		  if (s<m)
			s += (h-1)/d;
		}

	  if (s >= m)
		{
		  printf("YES\n");
		}
	  else
		{
		  printf("NO\n");
		}
	}
  return 0;
}
