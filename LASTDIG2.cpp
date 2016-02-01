#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tc, bld, bl;
  long long int p;
  char b[1010];
  
  int pt[][10] = {
	{0,0,0,0},
	{1,1,1,1},
	{6,2,4,8},
	{1,3,9,7},
	{6,4,6,4},
	{5,5,5,5},
	{6,6,6,6},
	{1,7,9,3},
	{6,8,4,2},
	{1,9,1,9}
  };
  
  //cin >> tc;
  scanf ("%d", &tc);
  while (tc--)
	{
	  scanf("%s%lld", b, &p);
	  bl = strlen(b);
	  
	  bld = b[bl-1]-'0';

	  if (p==0)
		printf ("1\n");
	  else
		printf ("%d\n", pt[bld][p%4]);
	}
  
  return 0;
}
