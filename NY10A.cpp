#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc;
  int i, p, v;
  int c[8];
  char s[41];

  cin >> tc;
  while (tc--)
	{
	  scanf ("%d", &i);
	  scanf ("%s", s);

	  for (int j=0; j<8; j++)
		c[j] = 0;

	  p = 0, v = 0;
	  if (s[p++] == 'T')
		{
		  if (s[p++] == 'T')
			v = 0;
		  else
			v = 1;
		}
	  else
		{
		  if (s[p++] == 'T')
			v = 2; // 10
		  else
			v = 3; // 11
		}

	  
	  for (; p<40; p++)
		{
		  if (s[p] == 'T')
			v = (v<<1) & 7;
		  else
			v = ((v<<1)|1) & 7;
		  c[v]++;
		}

	  cout << i;
	  for (int j=0; j<8; j++)
		cout << " " << c[j];
	  cout << endl;
	  
	}
  
  return 0;
}
