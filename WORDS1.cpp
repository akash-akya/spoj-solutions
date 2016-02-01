#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cstring>

using namespace std;

int compare_cstr(const void* c1, const void* c2) 
{ 
  return strcmp(*(const char**)(c1), *(const char**)(c2)); 
}

char bsearch(vector<string> v, char c)
{
  int low=0,high,mid;
  high = v.size();
  while(low<=high)
	{
	  mid = (low+high)/2;
	  if(v[mid][0] == c)
		return v[mid][1];
	  else if(c < v[mid])
		mid = high-1;
	}
}
 

int main()
{
  int tc;
  vector<string> v;
  bool flags[100000];
  int el;
  string s;
  string s1;
	
  cin >> tc;
  
  while(tc>0)
	{
	  cin >> el;
	  for(int i=0; i<el; i++)
		{
		  cin >> s;

		  s1 = "";
		  s1 += s[0];
		  s1 += s[s.size()-1];

		  v.push_back(s1);
		  flags[i] = false;
		}

	  sort(v.begin(), v.end());

	  for(int i=0; i < el; i++)
		{
		  cout << v[i] << endl;
		}
	  tc--;
	}
  return 0;
}
