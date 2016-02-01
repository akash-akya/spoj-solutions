#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
  int num, m;
  cin >> num;
  m = num % 10;

  
  if (m > 0)
	cout << "1" << endl << m << endl;
  else
	cout << "2" << endl;
}
