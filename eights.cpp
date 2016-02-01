#include <iostream>
using namespace std;

int main() {
  long long int n, start, tc;
  string end[] = {"192", "442", "692", "942"};

  cin >> tc;
  while (tc--)
	{
	  cin >> n;
	  n--;
	  
	  start = n>>2;
	  if (start)
		cout << start << end[n%4] << endl;
	  else
		cout << end[n%4] << endl;
	}
  
  return 0;
}
