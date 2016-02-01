#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
  vector<bool> p(100, true);

  for (int i=2; i*i < 100; i++)
	if (p[i])
	  for (int j=2*i; j < 100; j+=i)
		p[j] = false;
  
  for (int i=2; i < 100; i++)
	if (p[i])
	  cout << i << " ";

  return 0;
}
