#include <bits/stdc++.h>

using namespace std;

int bs(int x, vector<int> p, int c)
{
  int last_pos = p[0], cows = 1;
  
  for (auto i=p.begin(); i!=p.end(); i++)
	{
	  if (*i-last_pos >= x)
		{
		  if (++cows == c)
			return 1;
		  last_pos = *i;
		}
	}
  return 0;
}


int main()
{
  int tc;
  int n,c;
  int start, end, m;

  std::ios::sync_with_stdio(false);

  cin >> tc;
  while (tc--)
	{
	  cin >> n >> c;
	  vector<int> p(n);

	  for (int i=0; i<n; i++)
		cin >> p[i];

	  sort (p.begin(), p.end());
	  p.erase(unique(p.begin(),p.end()), p.end());
	  
	  start = 0;
	  end   = p.back() - p.front();
	  while (start+1 < end)
	  	{
		  m = start+(end-start)/2;

		  if (bs(m, p, c))
			start = m;
		  else
			end = m;
	  	}

	  cout << start << endl;
	}
 
  return 0;
}
