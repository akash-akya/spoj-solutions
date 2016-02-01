#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tc, n, i;
  string a;
  map<string,int> ac;

  ios::sync_with_stdio(false);
  
  cin >> tc;
  while (tc--)
	{
	  ac.clear();

	  cin >> n;
	  getline(cin, a);

	  for (i=0; i<n; i++)
		{
		  getline(cin, a);
		  ac[a]++;
		}

	  for (auto it=ac.begin(); it!=ac.end(); it++)
		cout << it->first << " " <<  it->second << endl;

	  cout << endl;
	}
  return 0;
}
