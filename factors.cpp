#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

void factors(int m, set<int> &f)
{
  int i,sr;
  sr = sqrt(m);
  
  for (i = 1; i <= sr; i++)
  	if (m % i == 0)
	  {
  		f.insert(i);
		f.insert(m/i);
	  }
}

int main()
{
  int num;
  set<int> f;

  
  cin >> num;
  factors(num, f);
  
  for (auto i=f.begin(); i!=f.end(); i++)
	  cout << *i << " ";

  return 0;
}
