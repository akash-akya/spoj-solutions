#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int n, i, a, b;
  int num = 0;
  // char op;
  int c[3] = {0, 0, 0};
  // char v[4];

  // ios::sync_with_stdio(false);
  
  cin >> n;

  for (i=0; i<n; i++)
	{
	  // cin >> v;
	  // cin >> a >> op >> b;
	  scanf ("%d/%d", &a, &b);
	  if(a==3) c[2]++;
	  else if(b==2) c[0]++;
	  else if(b==4) c[1]++;
	}


  num += c[0]/2;
  c[0] %= 2;

  if (c[2] >= c[1])
	{
	  c[1] = 0;
	  // c[2] -= c[1];
	}
  else
	c[1] -= c[2];

  num += (c[1] / 4);
  c[1] %= 4;

  if (c[0])
	c[1] = (c[1]==3)? 1 : 0;
  else if (c[1])
	c[1] = 1;

  num += c[0] + c[1] + c[2];
  // cout << (num+1) << endl;
  printf ("%d\n", num+1);
  return 0;
}
