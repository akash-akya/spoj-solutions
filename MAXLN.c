#include <stdio.h>

int main()
{
  int tc;
  double r;
  
  scanf ("%d", &tc);
  for (int i=1; i<=tc; i++)
	{
	  scanf ("%lf", &r);
	  printf ("Case %d: %.2lf\n", i, (4*r*r+0.25));
	}
  
  return 0;
}
