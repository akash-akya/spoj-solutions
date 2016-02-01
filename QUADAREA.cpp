#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc;
  double side[4], s;

  scanf ("%d", &tc);
  while (tc--)
	{
	  scanf ("%lf %lf %lf %lf", &side[0], &side[1], &side[2], &side[3]);
	  s = (side[0]+side[1]+side[2]+side[3])/2;

	  printf ("%.2lf\n", sqrt((s-side[0])
						  * (s-side[1])
						  * (s-side[2])
						  * (s-side[3])
						  ));
	}
  return 0;
}
