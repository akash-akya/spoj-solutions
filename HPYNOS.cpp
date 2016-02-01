#include <bits/stdc++.h>

using namespace std;

int isMagic (long long int n, int st)
{
  int s=0, r;
  
  if (n<10)
	{
	  if (n==1)
		return st;
	  else if (n==7)
		return st+5;
	  else
		return -1;
	}

  while (n>0)
	{
	  r = n%10;
	  s += r*r;
	  n /= 10;
	}

  return isMagic(s, st+1);
}

int main()
{
  long long int n, steps;
  
  scanf ("%lld", &n);
  steps = isMagic(n, 0);

  if (steps != -1)
	cout << steps << endl;
  else
	cout << -1 << endl;

  return 0;
}
